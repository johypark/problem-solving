#include <stdio.h>

enum { LENGTH = 5 };

int get_verification_number(const int *numbers, int length) {
  int verification_number;
  int sum = 0;

  for (int i = 0; i < length; i++)
    sum += numbers[i] * numbers[i];

  verification_number = sum % 10;
  return verification_number;
}

int main(void) {
  int numbers[LENGTH];
  for (int i = 0; i < LENGTH; i++)
    scanf("%d", &numbers[i]);

  printf("%d\n", get_verification_number(numbers, LENGTH));
}
