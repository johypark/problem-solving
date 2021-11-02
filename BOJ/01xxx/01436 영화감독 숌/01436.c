#include <stdio.h>

int get_apocalypse_number(int n) {
  int count = 0;
  int number = 0;
  int times, dividend;
  while (count < n) {
    times = 0;
    dividend = ++number;

    while (dividend > 0) {
      if (dividend % 10 == 6) {
        if (++times == 3) {
          count++;
          break;
        }
      } else {
        times = 0;
      }

      dividend /= 10;
    }
  }

  return number;
}

int main(void) {
  int n;
  scanf("%d", &n);

  printf("%d\n", get_apocalypse_number(n));
}
