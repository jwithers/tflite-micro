#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/strided_slice/strided_slice31_model_data.h"

const unsigned int g_strided_slice31_model_data_size = 1152;
alignas(16) const unsigned char g_strided_slice31_model_data[] = {0x18,0x00,0x00,0x00,0x54,0x46,0x4c,0x33,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x88,0x00,0x00,0x00,0x38,0x04,0x00,0x00,0x03,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x54,0x00,0x00,0x00,0x2c,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x2c,0xfd,0xff,0xff,0xc6,0xff,0xff,0xff,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xe2,0xff,0xff,0xff,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x08,0x00,0x04,0x00,0x06,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8c,0xfd,0xff,0xff,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0xfd,0xff,0xff,0x10,0x00,0x00,0x00,0x68,0x00,0x00,0x00,0x6c,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x14,0x00,0x00,0x00,0x10,0x00,0x0c,0x00,0x0b,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x08,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x08,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x64,0x02,0x00,0x00,0xc8,0x01,0x00,0x00,0x30,0x01,0x00,0x00,0xc8,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x56,0xfe,0xff,0xff,0x14,0x00,0x00,0x00,0x4c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x98,0x00,0x00,0x00,0xb4,0xfd,0xff,0xff,0x10,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x84,0xa2,0x00,0x3c,0x01,0x00,0x00,0x00,0x83,0xa1,0x80,0x43,0x01,0x00,0x00,0x00,0x16,0x2a,0x18,0xc3,0x53,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x30,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x74,0x72,0x61,0x6e,0x73,0x70,0x6f,0x73,0x65,0x5f,0x33,0x78,0x34,0x2f,0x63,0x72,0x6f,0x70,0x5f,0x66,0x72,0x65,0x71,0x5f,0x64,0x69,0x6d,0x2f,0x73,0x74,0x72,0x69,0x64,0x65,0x64,0x5f,0x73,0x6c,0x69,0x63,0x65,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x16,0xff,0xff,0xff,0x14,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x48,0x00,0x00,0x00,0x08,0xff,0xff,0xff,0x3b,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x62,0x61,0x73,0x65,0x5f,0x63,0x6f,0x6e,0x76,0x5f,0x6c,0x61,0x73,0x74,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x73,0x74,0x72,0x69,0x64,0x65,0x64,0x5f,0x73,0x6c,0x69,0x63,0x65,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x7a,0xff,0xff,0xff,0x14,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x68,0x00,0x00,0x00,0x6c,0xff,0xff,0xff,0x5b,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x30,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x74,0x72,0x61,0x6e,0x73,0x70,0x6f,0x73,0x65,0x5f,0x33,0x78,0x34,0x2f,0x63,0x72,0x6f,0x70,0x5f,0x66,0x72,0x65,0x71,0x5f,0x64,0x69,0x6d,0x2f,0x73,0x74,0x72,0x69,0x64,0x65,0x64,0x5f,0x73,0x6c,0x69,0x63,0x65,0x2f,0x73,0x74,0x61,0x63,0x6b,0x5f,0x31,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x18,0x00,0x14,0x00,0x13,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x6c,0x00,0x00,0x00,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x59,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x30,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x74,0x72,0x61,0x6e,0x73,0x70,0x6f,0x73,0x65,0x5f,0x33,0x78,0x34,0x2f,0x63,0x72,0x6f,0x70,0x5f,0x66,0x72,0x65,0x71,0x5f,0x64,0x69,0x6d,0x2f,0x73,0x74,0x72,0x69,0x64,0x65,0x64,0x5f,0x73,0x6c,0x69,0x63,0x65,0x2f,0x73,0x74,0x61,0x63,0x6b,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0f,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xa0,0x00,0x00,0x00,0x0c,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x84,0xa2,0x00,0x3c,0x01,0x00,0x00,0x00,0x83,0xa1,0x80,0x43,0x01,0x00,0x00,0x00,0x16,0x2a,0x18,0xc3,0x4d,0x00,0x00,0x00,0x73,0x74,0x72,0x65,0x61,0x6d,0x61,0x62,0x6c,0x65,0x5f,0x6d,0x6f,0x64,0x65,0x6c,0x5f,0x32,0x2f,0x75,0x6e,0x65,0x74,0x5f,0x30,0x2f,0x64,0x65,0x63,0x6f,0x64,0x65,0x72,0x5f,0x30,0x2f,0x63,0x6f,0x6e,0x76,0x32,0x64,0x74,0x72,0x61,0x6e,0x73,0x70,0x6f,0x73,0x65,0x5f,0x33,0x78,0x34,0x2f,0x63,0x6f,0x6e,0x76,0x2f,0x73,0x74,0x72,0x69,0x64,0x65,0x64,0x5f,0x73,0x6c,0x69,0x63,0x65,0x5f,0x33,0x32,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xa2,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x0c,0x00,0x10,0x00,0x0f,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x2d,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x2d,};
