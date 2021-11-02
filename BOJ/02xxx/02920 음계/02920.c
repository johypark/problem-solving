#include <stdbool.h>
#include <stdio.h>

enum { LENGTH = 8 };

void print_scale_order(const int *numbers, int length) {
  bool is_ascending = true;
  bool is_descending = true;
  for (int i = 0; i < length; i++) {
    if (numbers[i] != i + 1)
      is_ascending = false;
    if (numbers[i] != length - i)
      is_descending = false;
  }

  if (is_ascending)
    printf("ascending");
  else if (is_descending)
    printf("descending");
  else
    printf("mixed");

  printf("\n");
}

int main(void) {
  int numbers[LENGTH];
  for (int i = 0; i < LENGTH; i++)
    scanf("%d", &numbers[i]);

  print_scale_order(numbers, LENGTH);
}
