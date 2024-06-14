#pragma once
#include <stdio.h>

#define FOUR_BITS 4

int div16(int x) {
  //
  return (x < 0 ? x + (1 << FOUR_BITS) - 1 : x) >> FOUR_BITS;
}

void test_2_42() {

  printf("Practice problem 2.42\n");
  printf("div16(32) == %i\n", div16(32));
  printf("div16(-48) == %i\n", div16(-48));
  printf("div16(-248) == %i\n", div16(-248));
  printf("div16(38896) == %i\n", div16(38896));
}
