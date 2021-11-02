#include <stdbool.h>
#include <stdio.h>

enum { LENGTH = 10, DIVISOR = 42 };

int main(void) {
  int n;
  bool is_numbers_exist[DIVISOR] = {false};
  int count = 0;
  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &n);

    if (!is_numbers_exist[n % DIVISOR]) {
      is_numbers_exist[n % DIVISOR] = true;
      count++;
    }
  }

  printf("%d\n", count);
}
