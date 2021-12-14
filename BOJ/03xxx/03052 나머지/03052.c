#include <stdbool.h>
#include <stdio.h>

enum { LENGTH = 10, MODULAR = 42 };

int main(void) {
  int n;
  bool is_nums_exist[MODULAR] = {false};
  int count = 0;
  for (int i = 0; i < LENGTH; i++) {
    scanf("%d", &n);

    if (!is_nums_exist[n % MODULAR]) {
      is_nums_exist[n % MODULAR] = true;
      count++;
    }
  }

  printf("%d\n", count);
}
