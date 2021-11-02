#include <stdio.h>
#include <stdlib.h>

int get_max(const int *numbers, int length) {
  int max = numbers[0];
  for (int i = 1; i < length; i++)
    if (numbers[i] > max)
      max = numbers[i];

  return max;
}

int get_min(const int *numbers, int length) {
  int min = numbers[0];
  for (int i = 1; i < length; i++)
    if (numbers[i] < min)
      min = numbers[i];

  return min;
}

int main(void) {
  int n;
  scanf("%d", &n);

  int *numbers = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
    scanf("%d", &numbers[i]);

  printf("%d %d\n", get_min(numbers, n), get_max(numbers, n));

  free(numbers);
}
