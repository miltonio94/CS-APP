
int tadd_ok(int, int);
int tadd_ok_v2(int, int);

int tadd_ok(int x, int y) {
  int sum = x + y;

  int is_overflowing_negatve = x < 0 && y < 0 && sum >= 0;
  int is_overflowing_positive = x >= 0 && y >= 0 && sum < 0;

  return !is_overflowing_negatve && !is_overflowing_positive;
}
