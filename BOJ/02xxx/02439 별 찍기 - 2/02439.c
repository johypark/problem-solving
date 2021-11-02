#include <stdio.h>

void print_stars(int n) {
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n - i; j++)
      printf(" ");
    for (int j = 0; j < i; j++)
      printf("*");

    printf("\n");
  }
}

int main(void) {
  int n;
  scanf("%d", &n);

  print_stars(n);
}
