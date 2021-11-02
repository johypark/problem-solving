#include <stdio.h>

enum { LENGTH = 9 };

int get_max_number_index(const int *numbers, int length) {
  int max_index = -1;
  int max = 0;

  for (int i = 0; i < length; i++)
    if (max < numbers[i]) {
      max_index = i;
      max = numbers[i];
    }

  return max_index;
}

int main(void) {
  int numbers[LENGTH];
  for (int i = 0; i < LENGTH; i++)
    scanf("%d", &numbers[i]);

  int max_index = get_max_number_index(numbers, LENGTH);
  printf("%d\n%d\n", numbers[max_index], max_index + 1);
}
