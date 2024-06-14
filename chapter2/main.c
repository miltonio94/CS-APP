#include "problem2_10.c"
#include "problem2_11.c"
#include "problem2_13.c"
#include "problem2_27.c"
#include "problem2_42.c"
#include <stdio.h>

int main() {
  // testing practice problem 2.10
  printf("Practice problem 2.10\n");
  int x = 255;
  int y = 137;
  printf("x: %i \t y: %i before inplace_swap\n", x, y);
  inplace_swap(&x, &y);
  printf("x: %i \t y: %i after inplace_swap\n", x, y);

  // testing practice problem 2.11
  printf("Practice problem 2.11\n");
  int cnt = 10;
  int a[cnt];
  populate_array(a, cnt);
  reverse_array(a, cnt);
  print_array(a, cnt);

  // testing practice problem 2.13
  printf("Practice problem 2.13\n");
  x = 0xacedcaec;
  int m = 0xb4934b94;

  int result_xor = bool_xor(x, m);
  int result_or = bool_or(x, m);
  int or = x | m;
  int xor = x ^ m;

  printf("bool_xor(%.8x, %.8x): %.8x \t %.8x ^ %.8x : %.8x\n", x, m, result_xor,
         x, m, xor);
  printf("bool_or(%.8x, %.8x): %.8x \t %.8x | %.8x : %.8x\n", x, m, result_or,
         x, m, or);

  // testing practice problem 2.27
  printf("Practice problem 2.27\n");
  unsigned x_ = 0u;
  unsigned y_ = 20;
  printf("%u + %u \t overflow %i \n", x_, y_, uadd_ok(x_, y_));

  // testing practice problem 2.42
  test_2_42();

  return 0;
}
