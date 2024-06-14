
int problem_a_least_significant_byte(int x) { return x & 0xff; }
int problem_b_complement_least_significant_bit_preserved(int x) {
  int lsb_mask = 0xff;
  int lsb = x & lsb_mask;
  int complemented = ~x & ~lsb_mask;

  return complemented | lsb;
}
int problem_c_most_significant_byte_are_one(int x) { return x | 0xff000000; }
