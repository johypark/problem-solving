#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  char ch;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    scanf(" %c", &ch);
    sum += ch - '0';
  }

  printf("%d\n", sum);
}
