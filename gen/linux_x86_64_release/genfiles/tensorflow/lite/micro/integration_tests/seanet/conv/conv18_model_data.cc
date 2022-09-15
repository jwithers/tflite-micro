#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/conv/conv18_model_data.h"

const unsigned int g_conv18_model_data_size = 1832;
alignas(16) const unsigned char g_conv18_model_data[] = {0x18,0x00,0x00,0x00,0x54,0x46,0x4c,0x33,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0xcc,0x02,0x00,0x00,0xe0,0x06,0x00,0x00,0x03,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xb8,0x02,0x00,0x00,0xa4,0x00,0x00,0x00,0x0c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x5c,0xfd,0xff,0xff,0x72,0xff,0xff,0xff,0x04,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x3b,0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0xa1,0xff,0xff,0xff,0xff,0xff,0xff,0x07,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x04,0x01,0x00,0x00,0x00,0x00,0x00,0x0b,0x10,0xfe,0xff,0xff,0xff,0xff,0xff,0x55,0x0c,0x00,0x00,0x00,0x00,0x00,0x00,0xcb,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0xed,0x32,0x00,0x00,0x00,0x00,0x00,0x00,0x59,0xdb,0xff,0xff,0xff,0xff,0xff,0xff,0x7d,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0xa6,0x11,0x00,0x00,0x00,0x00,0x00,0x00,0x62,0x35,0x00,0x00,0x00,0x00,0x00,0x00,0xaf,0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x9d,0xad,0xff,0xff,0xff,0xff,0xff,0xff,0x31,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x68,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0x00,0x06,0x00,0x08,0x00,0x04,0x00,0x06,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x1f,0x91,0x19,0x14,0xc3,0x21,0x91,0xd9,0x03,0x4a,0x9e,0x10,0x05,0x2e,0x13,0x05,0x6b,0x7f,0x45,0x66,0x00,0x8d,0x0b,0x29,0x91,0xec,0x24,0x6b,0x34,0xbc,0x07,0x28,0x07,0x09,0x20,0x87,0xdc,0x8a,0x08,0xa3,0x96,0x22,0x00,0x27,0x36,0x76,0x08,0x6e,0x09,0x8b,0x5d,0x81,0x15,0x2a,0x12,0x7a,0x00,0x19,0x89,0x66,0x94,0x6e,0x57,0x0d,0x09,0xa3,0x2f,0x82,0xa9,0xbd,0xa3,0xc8,0x09,0x00,0xe0,0xc8,0x17,0x53,0xc5,0x18,0x84,0x17,0xe0,0x78,0x03,0x84,0x02,0x7f,0x05,0xd7,0x10,0x8b,0x9a,0x0f,0x0b,0x09,0x1a,0xae,0xba,0x3b,0x97,0x1a,0x8c,0xf5,0x0b,0x0d,0xca,0x00,0x11,0x69,0x02,0x0f,0xc1,0xb8,0x24,0x3b,0xf3,0xcf,0x11,0x2c,0x05,0x86,0x03,0x8a,0x22,0x69,0x73,0x0c,0x83,0x9b,0x09,0xa7,0x26,0x9d,0x04,0xf1,0xbc,0x1d,0xe8,0xbb,0x42,0x1e,0x96,0x15,0x2c,0x1f,0xcd,0xe8,0xc6,0x00,0x07,0xd2,0x9a,0x31,0xb2,0x3d,0xe5,0x2b,0xd0,0xe2,0x05,0x10,0x39,0x5f,0x01,0x02,0x6e,0x88,0x0e,0x59,0x9a,0xab,0x0c,0x7e,0xc6,0xe6,0xd7,0x05,0x2d,0x00,0x0a,0x89,0x82,0x0b,0xd6,0x00,0x26,0x7b,0xb5,0x15,0x02,0x0f,0x1a,0x90,0x1c,0x1c,0x9f,0x27,0x6d,0xc5,0x04,0x63,0xa1,0x08,0x07,0x29,0x1c,0x0a,0x80,0x81,0x4d,0x4c,0x01,0x7c,0x0e,0x18,0x8d,0x94,0x2c,0x89,0x21,0xf1,0x08,0x20,0x00,0x98,0x0d,0x78,0x2e,0x85,0xdb,0xca,0x88,0x19,0x8f,0x8c,0x5e,0x1a,0x83,0x18,0x29,0x11,0x8a,0x80,0x8a,0xf6,0x09,0x8f,0x95,0x33,0xbe,0x38,0xae,0x25,0xa5,0x7f,0x05,0xc3,0x45,0x55,0x9e,0x79,0x8f,0x8f,0xd9,0x2c,0x74,0x97,0x5a,0x37,0x00,0xc5,0x87,0xd8,0xbc,0x62,0x11,0xb8,0x07,0x98,0x04,0x1d,0x2f,0x69,0x7c,0x47,0x44,0x24,0x05,0x91,0x24,0x6f,0xb7,0xc8,0xcb,0xb0,0x0b,0x00,0xc4,0xa3,0x18,0x69,0xa5,0x12,0xcf,0x1a,0xa8,0x9c,0x05,0xa2,0x04,0xd6,0x06,0xc5,0x11,0xdb,0x67,0x08,0x13,0x0c,0x07,0xda,0x48,0x82,0x93,0xb9,0x78,0x5f,0x9d,0x28,0xb2,0x01,0x3c,0x5e,0x00,0xbe,0x7e,0xde,0xb6,0x87,0x0d,0x0e,0x08,0x64,0x0a,0x25,0x0a,0xae,0x6d,0x55,0x62,0x17,0x11,0x15,0x0c,0xe8,0x88,0x88,0x4b,0x50,0x04,0x4e,0x62,0x07,0xe6,0xac,0xe5,0x82,0xd8,0x07,0x0c,0xc3,0x1b,0xc5,0xa3,0xc1,0xe2,0xb4,0x63,0x90,0x06,0x2d,0x17,0x0a,0x05,0xec,0x1c,0x98,0x79,0xc8,0xea,0xcb,0x08,0x03,0xb6,0xb3,0x16,0x5f,0x9c,0x18,0x90,0x16,0xb7,0x76,0x04,0xc8,0x04,0xd9,0x04,0xdf,0x0b,0xd3,0xbc,0x09,0x14,0x06,0x08,0x09,0x24,0x6d,0x95,0x7d,0x12,0x72,0xc4,0x10,0xbe,0x17,0x23,0x57,0x01,0xa8,0x07,0xb7,0x67,0x6a,0x11,0x1e,0x0b,0xb0,0x02,0x15,0xc4,0x98,0x97,0x4c,0x36,0x0f,0x02,0x03,0x37,0x6a,0xc6,0x81,0x97,0x75,0x8c,0x31,0xb5,0x16,0x2c,0x3f,0x07,0xce,0x02,0xe6,0x72,0x7f,0x0a,0x18,0x0c,0x63,0x01,0x17,0xcc,0xb0,0x87,0x43,0x5f,0x21,0x27,0xe8,0xa9,0x48,0x69,0x1e,0x9d,0x03,0x0b,0x0c,0x82,0xd7,0x0b,0x42,0x01,0x0f,0xaf,0x77,0x25,0x24,0xd7,0xbd,0x09,0x35,0x01,0x95,0xef,0x63,0x35,0xb8,0xcb,0x0d,0x04,0x00,0x04,0x00,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x48,0xfc,0xff,0xff,0x10,0x00,0x00,0x00,0x6c,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x16,0x00,0x00,0x00,0x10,0x00,0x0c,0x00,0x0b,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x24,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x00,0x00,0x0a,0x00,0x10,0x00,0x0f,0x00,0x08,0x00,0x04,0x00,0x0a,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x20,0x03,0x00,0x00,0x7c,0x01,0x00,0x00,0x6c,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x9e,0xfe,0xff,0xff,0x10,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x40,0x00,0x00,0x00,0xf4,0xfc,0xff,0xff,0x10,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x90,0xb0,0x0d,0x3d,0x01,0x00,0x00,0x00,0x75,0xaf,0x8d,0x44,0x01,0x00,0x00,0x00,0xb1,0x52,0x98,0xc3,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x02,0xff,0xff,0xff,0x1c,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xe4,0x00,0x00,0x00,0x0c,0x00,0x0c,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x88,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x4d,0xce,0x21,0x37,0x93,0x6f,0x2a,0x37,0xa4,0x6c,0xd6,0x37,0x76,0x24,0x82,0x37,0x65,0x7e,0xe5,0x36,0xda,0xdb,0x95,0x39,0x35,0x91,0x2d,0x37,0x7e,0x15,0xb3,0x37,0x09,0x69,0x57,0x37,0x31,0x92,0xd2,0x37,0x0b,0xdc,0x49,0x37,0x47,0x36,0x8c,0x38,0x3c,0x68,0xea,0x37,0xa5,0x9f,0x31,0x37,0x1f,0x7a,0x55,0x37,0x81,0x14,0x5a,0x37,0x01,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x14,0x00,0x10,0x00,0x0f,0x00,0x08,0x00,0x00,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x6c,0x01,0x00,0x00,0x64,0xfe,0xff,0xff,0x10,0x00,0x00,0x00,0x94,0x00,0x00,0x00,0xd4,0x00,0x00,0x00,0x14,0x01,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0xc6,0x48,0xf3,0x38,0x46,0x21,0x00,0x39,0x19,0x33,0xa1,0x39,0x30,0xad,0x43,0x39,0x46,0x87,0xac,0x38,0x3a,0x52,0x61,0x3b,0xec,0x7b,0x02,0x39,0xa6,0xa1,0x86,0x39,0xd8,0xf0,0x21,0x39,0x82,0x4d,0x9e,0x39,0xee,0xc0,0x17,0x39,0x14,0xd1,0x52,0x3a,0xe4,0x38,0xb0,0x39,0x99,0x88,0x05,0x39,0xc7,0x7c,0x20,0x39,0xa9,0xf2,0x23,0x39,0x10,0x00,0x00,0x00,0x34,0x62,0x71,0x3c,0x06,0x42,0x7e,0x3c,0x76,0xab,0x8c,0x3c,0xb3,0xcc,0xae,0x3c,0x09,0x00,0xd6,0x3b,0x96,0x8f,0xdf,0x3e,0xf4,0x76,0x81,0x3c,0x76,0xfe,0x86,0x3c,0x2a,0xc1,0x95,0x3c,0x5b,0xaf,0x90,0x3c,0x78,0x86,0x92,0x3c,0x55,0x99,0xc0,0x3d,0xe5,0xb6,0x93,0x3c,0x88,0x7d,0x84,0x3c,0xcd,0x3b,0x9f,0x3c,0x38,0x32,0x8e,0x3c,0x10,0x00,0x00,0x00,0x22,0x32,0x47,0xbc,0x8b,0x77,0x4d,0xbc,0xb3,0xf0,0x1f,0xbd,0xd6,0x25,0xc2,0xbc,0x37,0x2e,0x2b,0xbc,0xcc,0xcc,0xc0,0xbe,0x4b,0x66,0x4e,0xbc,0x63,0x94,0x05,0xbd,0xf6,0xac,0xa0,0xbc,0xe7,0x10,0x1d,0xbd,0x6c,0x91,0x96,0xbc,0x72,0x2b,0xd1,0xbd,0x72,0xd8,0x2e,0xbd,0x12,0xd6,0x53,0xbc,0xf9,0x30,0x88,0xbc,0xc4,0xaa,0xa2,0xbc,0x04,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x0e,0x00,0x10,0x00,0x0c,0x00,0x0b,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x0e,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x48,0x00,0x00,0x00,0x0c,0x00,0x14,0x00,0x10,0x00,0x0c,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x1c,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x51,0x43,0xaa,0x3d,0x01,0x00,0x00,0x00,0x3d,0xe7,0xdc,0x44,0x01,0x00,0x00,0x00,0xfc,0x41,0x2a,0xc5,0x04,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x28,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x0c,0x00,0x10,0x00,0x0f,0x00,0x00,0x00,0x08,0x00,0x04,0x00,0x0c,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x03,};
