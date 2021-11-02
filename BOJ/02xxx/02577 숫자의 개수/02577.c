#include <stdio.h>
#include <stdlib.h>

enum { BASE = 10 };

int *get_numbers_used(int number) {
  int *numbers_used = calloc(BASE, sizeof(int));
  while (number > 0) {
    numbers_used[number % BASE]++;
    number /= BASE;
  }

  return numbers_used;
}

int main(void) {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);

  int *numbers_used = get_numbers_used(a * b * c);
  for (int i = 0; i < BASE; i++)
    printf("%d\n", numbers_used[i]);

  free(numbers_used);
}
