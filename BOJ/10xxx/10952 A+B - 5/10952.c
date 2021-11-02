#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int a, b;
  while (true) {
    scanf("%d%d", &a, &b);

    if (a == 0 && b == 0)
      break;

    printf("%d\n", a + b);
  }
}
