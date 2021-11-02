#include <stdio.h>

enum { MULTIPLICATION_TABLE_TO = 9 };

void print_multiplication_table(int n, int to) {
  for (int i = 1; i <= to; i++)
    printf("%d * %d = %d\n", n, i, n * i);
}

int main(void) {
  int n;
  scanf("%d", &n);

  print_multiplication_table(n, MULTIPLICATION_TABLE_TO);
}
