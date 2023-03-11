/* Copyright 2023 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include <cstring>

#include "tensorflow/lite/c/builtin_op_data.h"
#include "tensorflow/lite/c/common.h"
#include "tensorflow/lite/kernels/internal/tensor_ctypes.h"
#include "tensorflow/lite/kernels/kernel_util.h"
#include "tensorflow/lite/kernels/op_macros.h"
#include "tensorflow/lite/micro/kernels/kernel_util.h"
#include "tensorflow/lite/micro/kernels/xtensa/xtensa.h"
#include "tensorflow/lite/micro/kernels/xtensa/xtensa_reshape.h"
#include "tensorflow/lite/micro/memory_helpers.h"
#include "tensorflow/lite/micro/micro_utils.h"

namespace tflite {
namespace ops {
namespace micro {
namespace reshape {

#if defined(VISION_P6)
void* Init(TfLiteContext* context, const char* buffer, size_t length) {
  TFLITE_DCHECK(context->AllocatePersistentBuffer != nullptr);
  void* data =
      context->AllocatePersistentBuffer(context, sizeof(XtensaReshapeData));
  if (InitXtensaContext()) {
    return nullptr;
  }
  return data;
}
#endif  // defined(VISION_P6)

TfLiteStatus ReshapeOutput(TfLiteContext* context, TfLiteNode* node) {
  MicroContext* micro_context = GetMicroContext(context);

  TfLiteTensor* input =
      micro_context->AllocateTempInputTensor(node, kReshapeInputTensor);
  TF_LITE_ENSURE(context, input != nullptr);
  TfLiteTensor* output =
      micro_context->AllocateTempOutputTensor(node, kReshapeOutputTensor);
  TF_LITE_ENSURE(context, output != nullptr);
  // Tensorflow's Reshape allows one of the shape components to have the
  // special -1 value, meaning it will be calculated automatically based on the
  // input. Here we calculate what that dimension should be so that the number
  // of output elements in the same as the number of input elements.
  int num_input_elements = NumElements(input);
  TfLiteIntArray* output_shape = output->dims;

  if (NumInputs(node) == 1 &&  // Legacy scalar supported with params.
      output_shape->size == 1 && output_shape->data[0] == 0) {
    // Legacy tflite models use a shape parameter of [0] to indicate scalars,
    // so adjust accordingly. TODO(b/111614235): Allow zero-sized buffers during
    // toco conversion.
    output_shape->size = 0;
  }

  int num_output_elements = 1;
  int stretch_dim = -1;
  for (int i = 0; i < output_shape->size; ++i) {
    int value = output_shape->data[i];
    if (value == -1) {
      TF_LITE_ENSURE_EQ(context, stretch_dim, -1);
      stretch_dim = i;
    } else {
      num_output_elements *= value;
    }
  }
  if (stretch_dim != -1) {
    TfLiteEvalTensor* output_eval =
        tflite::micro::GetEvalOutput(context, node, kReshapeOutputTensor);
    TF_LITE_ENSURE_STATUS(tflite::micro::CreateWritableTensorDimsWithCopy(
        context, output, output_eval));
    output_shape = output->dims;  // output tensor dims were moved
    output_shape->data[stretch_dim] = num_input_elements / num_output_elements;
    num_output_elements *= output_shape->data[stretch_dim];
  }

  TF_LITE_ENSURE_TYPES_EQ(context, input->type, output->type);
  TF_LITE_ENSURE_EQ(context, num_input_elements, num_output_elements);

  micro_context->DeallocateTempTfLiteTensor(input);
  micro_context->DeallocateTempTfLiteTensor(output);
  return kTfLiteOk;
}

TfLiteStatus Prepare(TfLiteContext* context, TfLiteNode* node) {
  TF_LITE_ENSURE(context, NumInputs(node) == 1 || NumInputs(node) == 2);
  TF_LITE_ENSURE_EQ(context, NumOutputs(node), 1);
  TF_LITE_ENSURE_EQ(context, ReshapeOutput(context, node), kTfLiteOk);
#if defined(VISION_P6)
  {
    MicroContext* micro_context = GetMicroContext(context);
    TfLiteTensor* input =
        micro_context->AllocateTempInputTensor(node, kReshapeInputTensor);
    // Vision P6 currently only supports upto 4D int8 input tensors
    if (NumDimensions(input) <= 4 && input->type == kTfLiteInt8) {
      TF_LITE_ENSURE_OK(context, ReshapePrepareVision(context, node));
    }
    micro_context->DeallocateTempTfLiteTensor(input);
  }
#endif  // VISION_P6
  return kTfLiteOk;
}

TfLiteStatus Eval(TfLiteContext* context, TfLiteNode* node) {
  const TfLiteEvalTensor* input =
      tflite::micro::GetEvalInput(context, node, kReshapeInputTensor);
  TfLiteEvalTensor* output =
      tflite::micro::GetEvalOutput(context, node, kReshapeOutputTensor);

  // TODO(b/162522304): storing input bytes in OpData increases some models
  // significantly, possibly due to alignment issues.
  size_t input_bytes;
  TF_LITE_ENSURE_STATUS(TfLiteTypeSizeOf(input->type, &input_bytes));
  input_bytes *= ElementCount(*input->dims);

  // Do nothing for in-place reshape.
  if (input->data.raw != output->data.raw) {
    // Otherwise perform reshape with copy.
#if defined(VISION_P6)
    // Vision P6 currently only supports upto 4D int8 input tensors
    if (tflite::micro::GetTensorShape(input).DimensionsCount() <= 4 &&
        input->type == kTfLiteInt8) {
      XtensaReshapeData* op_data_xtensa =
          static_cast<XtensaReshapeData*>(node->user_data);
      ReshapeEvalVision(*op_data_xtensa, input, output);
    } else {
#endif  // VISION_P6
      memcpy(output->data.raw, input->data.raw, input_bytes);
#if defined(VISION_P6)
    }
#endif  // VISION_P6
  }
  return kTfLiteOk;
}

}  // namespace reshape

TfLiteRegistration_V1 Register_RESHAPE() {
#if defined(VISION_P6)
  return tflite::micro::RegisterOp(reshape::Init, reshape::Prepare,
                                   reshape::Eval);
#else
  return tflite::micro::RegisterOp(nullptr, reshape::Prepare, reshape::Eval);
#endif
}

}  // namespace micro
}  // namespace ops
}  // namespace tflite
