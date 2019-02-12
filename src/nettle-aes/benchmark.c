#include "aes.h"

static const uint8_t data[16] = {
  0x0,0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xa,0xb,0xc,0xd,0xe,0xf
};

static uint8_t result[16];

struct aes_ctx aes_ctx;

int
benchmark (void)
{
  aes_encrypt(&aes_ctx, 16, result, data);
  aes_decrypt(&aes_ctx, 16, result, result);
  return 0;
}

int verify_benchmark(int unused) {
  int i;
  uint8_t expected[16] =
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  for (i=0; i<16; i++)
    if (result[i] != expected[i])
      return 0;
  return 1;
}
