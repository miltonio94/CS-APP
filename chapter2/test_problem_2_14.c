#include <stdio.h>

int main() {
  unsigned int a = 0x55;
  unsigned int b = 0x46;

  unsigned int c = (a ^ b) ^ 0xff;
  /* c = c & (a & b); */
  printf("c = %u;", c);
}
