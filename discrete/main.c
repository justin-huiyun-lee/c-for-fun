
#include <stdio.h>
#include <stdlib.h>

int sequence_recursion(int n) {
  static int m = 0;
  if (n == 0) {
    return 1;
  }
  m++;
  return sequence_recursion(n - 1) + m;
}

int main() {

  printf("%d", sequence_recursion(5));

  return 0;
}

int seq_rec(int n) {
  static int m = 0;
  if (n == 0) {
    return 1;
  }
  return seq_rec(n - 1) + m++;
}
