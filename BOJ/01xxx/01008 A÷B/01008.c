#include <stdio.h>

enum { PRECISION = 9 };

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);

  printf("%.*f\n", PRECISION, (double)a / b);
}
