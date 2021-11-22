#include <stdio.h>

enum { LENGTH = 5 };

int get_verification_num(const int *nums, int length) {
  int verification_num;
  int sum = 0;

  for (int i = 0; i < length; i++)
    sum += nums[i] * nums[i];

  verification_num = sum % 10;
  return verification_num;
}

int main(void) {
  int nums[LENGTH];
  for (int i = 0; i < LENGTH; i++)
    scanf("%d", &nums[i]);

  printf("%d\n", get_verification_num(nums, LENGTH));
}
