#pragma once
#include "problem2_10.c"
#include <stdio.h>

void populate_array(int *a, unsigned cnt) {
  int i;
  for (i = 0; i < cnt; i++) {
    a[i] = i;
  }
}

void reverse_array(int a[], int cnt) {
  int first, last;
  for (first = 0, last = cnt - 1; first < last; first++, last--) {
    inplace_swap(&a[first], &a[last]);
  }
}

void print_array(int *a, int cnt) {
  printf("[");
  int i;
  for (i = 0; i < cnt; i++) {
    if (i == cnt - 1)
      printf("%i", a[i]);
    else
      printf("%i, ", a[i]);
  }
  printf("]\n");
}
