#include <stdio.h>
#include <stdlib.h>

enum { BASE = 10 };

int *get_nums_used(int num) {
  int *nums_used = calloc(BASE, sizeof(int));
  while (num > 0) {
    nums_used[num % BASE]++;
    num /= BASE;
  }

  return nums_used;
}

int main(void) {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);

  int *nums_used = get_nums_used(a * b * c);
  for (int i = 0; i < BASE; i++)
    printf("%d\n", nums_used[i]);

  free(nums_used);
}
