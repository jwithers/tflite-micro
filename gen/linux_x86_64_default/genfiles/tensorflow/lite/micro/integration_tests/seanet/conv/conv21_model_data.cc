#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/conv/conv21_model_data.h"

const unsigned int g_conv21_model_data_size = 1544;
alignas(16) const unsigned char g_conv21_model_data[] = {0x18,0x00,0x00,0x00,0x54,0x46,0x4c,0x33,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x6c,0x03,0x00,0x00,0xc0,0x05,0x00,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x58,0x03,0x00,0x00,0x34,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xbc,0xfc,0xff,0xff,0xe2,0xff,0xff,0xff,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0xe4,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x70,0x14,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x08,0x00,0x04,0x00,0x06,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x10,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xae,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0x00,0x00,0x00,0xdc,0x00,0x00,0xef,0x00,0xfd,0x00,0x00,0x93,0x00,0x00,0x00,0xaa,0x00,0x00,0x00,0xb3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa7,0x00,0x00,0x00,0x00,0xa4,0x01,0x00,0xa6,0xa2,0xd4,0x00,0x00,0x85,0x02,0x00,0xdb,0xa7,0x9e,0x01,0x00,0xeb,0x03,0x00,0xd2,0x87,0xe4,0x00,0xf9,0xc9,0x02,0x00,0xe7,0x8f,0xe8,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0x00,0x00,0x91,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb4,0x00,0x00,0x00,0x00,0xcd,0x00,0x93,0xc2,0xd3,0x01,0x00,0x00,0x00,0x00,0xdb,0xef,0xfe,0x03,0x00,0xb1,0xec,0x00,0x00,0x8c,0xa7,0x02,0xbb,0x01,0x00,0x00,0x00,0xc4,0xdf,0x01,0x87,0x00,0x00,0x00,0x00,0x00,0xc0,0x00,0xc7,0x01,0x00,0x00,0x00,0xf7,0x00,0xfa,0x01,0x01,0x01,0x00,0x00,0xc7,0x00,0x00,0x01,0x02,0x00,0x00,0x00,0xd0,0x90,0x01,0x03,0x02,0x01,0xd0,0x01,0xe8,0xf8,0x03,0x00,0x03,0x01,0xdb,0x02,0xa3,0x89,0x02,0xc3,0x02,0x05,0x00,0x00,0xb8,0xdf,0x01,0x00,0x01,0x02,0x00,0x01,0xb5,0x8e,0x00,0x90,0x02,0x00,0xeb,0xf7,0xeb,0xd6,0xb4,0x03,0x01,0x03,0xb2,0xe1,0xfb,0xc0,0xc0,0x03,0x04,0x02,0xad,0xc6,0x9f,0xba,0xee,0x04,0x06,0x07,0xed,0x01,0x91,0x81,0x00,0x04,0x01,0x02,0xe3,0x05,0x92,0x7c,0x00,0x01,0x04,0x03,0xb7,0x00,0xa1,0xe8,0x01,0x9f,0x03,0x04,0xdc,0x02,0xb8,0x98,0x00,0xcc,0x03,0x03,0x00,0xe8,0xb4,0xb2,0x05,0x06,0xb7,0xc6,0x00,0xef,0x00,0x03,0x0b,0x08,0xcc,0xe3,0x01,0xde,0x05,0x11,0xc6,0x1b,0x04,0x82,0x03,0xd3,0x06,0x1d,0x06,0x18,0x03,0xa5,0x03,0x5e,0x1c,0x69,0xab,0x30,0x84,0x5f,0x01,0x12,0x02,0x0e,0x84,0x93,0xcb,0x7b,0x00,0x9b,0x08,0x08,0xcf,0x0a,0x96,0x8a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x00,0xb2,0x00,0x00,0xae,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x83,0x00,0x00,0x00,0xf6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x96,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc4,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0xbc,0x00,0x00,0x00,0x8e,0x00,0x00,0x00,0xba,0x00,0x00,0x00,0xd4,0x00,0x00,0x00,0x8f,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xb0,0xc3,0x00,0x00,0x00,0xae,0x00,0x00,0xbc,0xb1,0x00,0x00,0x01,0xc7,0x00,0x00,0xa9,0x92,0x01,0x00,0x01,0xca,0x00,0x00,0xa3,0xbe,0x00,0x01,0x00,0xab,0x00,0x00,0xc1,0x00,0x00,0x01,0x00,0xc6,0x00,0x00,0x9d,0x00,0x00,0x00,0x00,0xbe,0x00,0x00,0xb7,0xc7,0x01,0x02,0xfc,0xda,0x00,0x00,0xd8,0xa6,0x01,0x03,0x00,0xc2,0x00,0x00,0xa3,0xe5,0x03,0x03,0x01,0xf5,0x00,0x00,0xe2,0x8c,0x05,0x07,0x02,0xe9,0x00,0x02,0xd4,0xa3,0x05,0x02,0x01,0xc2,0x00,0x01,0xbd,0xf1,0x03,0x02,0x01,0x85,0x00,0x00,0xed,0xd5,0x01,0x01,0xb0,0xd6,0x00,0xe0,0xc4,0xb2,0x01,0x02,0x00,0x01,0x00,0xe9,0xa7,0x00,0x02,0x08,0xee,0x00,0x00,0xa4,0xd0,0xb4,0x03,0x07,0x04,0xaf,0x00,0xd6,0xca,0xbc,0x04,0x0f,0x05,0xf9,0xb7,0xbe,0xcc,0x01,0x07,0x0c,0x01,0xb7,0x92,0xe8,0x00,0xcb,0x02,0x09,0x00,0xe2,0xeb,0xf3,0xec,0xd0,0x02,0x05,0x8f,0xad,0x91,0xe4,0xe2,0xbe,0x9c,0x04,0xa8,0x06,0x87,0x92,0x85,0xa7,0x01,0x15,0xb5,0x07,0x7f,0xae,0x90,0xc4,0x06,0x1b,0x05,0x01,0x9b,0x88,0x98,0x7b,0x07,0x32,0x0a,0x9b,0xc0,0xc4,0xc4,0xca,0x13,0x55,0x73,0x8e,0x93,0xc0,0x0f,0xaf,0x02,0x0a,0x06,0x85,0xe3,0x93,0xdb,0xb7,0x00,0x0a,0x09,0x7c,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x08,0xfe,0xff,0xff,0x10,0x00,0x00,0x00,0x6c,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x16,0x00,0x00,0x00,0x10,0x00,0x0c,0x00,0x0b,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x24,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x00,0x00,0x0a,0x00,0x10,0x00,0x0f,0x00,0x08,0x00,0x04,0x00,0x0a,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x60,0x01,0x00,0x00,0xd4,0x00,0x00,0x00,0x6c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x46,0xff,0xff,0xff,0x10,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x40,0x00,0x00,0x00,0xb4,0xfe,0xff,0xff,0x10,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x3a,0x45,0xda,0x3a,0x01,0x00,0x00,0x00,0x6a,0x15,0x35,0x42,0x01,0x00,0x00,0x00,0x85,0x43,0x5a,0xc2,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xa0,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xaa,0xff,0xff,0xff,0x1c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x3c,0x00,0x00,0x00,0x0c,0x00,0x0c,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xe7,0xd6,0x41,0x37,0x07,0x8a,0x81,0x37,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0f,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x54,0x00,0x00,0x00,0x7c,0xff,0xff,0xff,0x10,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x2c,0x00,0x00,0x00,0x34,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x73,0xa9,0x0f,0x3b,0x52,0x03,0x40,0x3b,0x02,0x00,0x00,0x00,0x20,0x8a,0x8e,0x3e,0x4b,0x83,0xbe,0x3e,0x02,0x00,0x00,0x00,0x99,0x71,0x2e,0xbe,0x30,0xa8,0x84,0xbe,0x04,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x10,0x00,0x0c,0x00,0x0b,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x48,0x00,0x00,0x00,0x0c,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x0d,0xb5,0xac,0x3b,0x01,0x00,0x00,0x00,0xb4,0xb3,0x2c,0x43,0x01,0x00,0x00,0x00,0xd9,0xf9,0x58,0xc2,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0xa6,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x0c,0x00,0x10,0x00,0x0f,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x03,};
