#!/bin/bash -x

make -f /opt/tensorflow/lite/micro/tools/make/Makefile clean
make -f /opt/tensorflow/lite/micro/tools/make/Makefile third_party_downloads

make -f /opt/tensorflow/lite/micro/tools/make/Makefile TARGET=xtensa OPTIMIZED_KERNEL_DIR=xtensa TARGET_ARCH=fusion_f1 XTENSA_CORE=F1_190305_swupgrade keyword_benchmark BUILD_TYPE=release -j8

SIZE_LOG='/opt/tensorflow/ci/log.txt'
touch ${SIZE_LOG}
xt-size /opt/tensorflow/lite/micro/tools/make/gen/xtensa_fusion_f1_release/bin/keyword_benchmark &>> ${SIZE_LOG}
