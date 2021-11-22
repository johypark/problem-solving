#include <stdio.h>
#include <stdlib.h>

int get_max(const int *nums, int length) {
  int max = nums[0];
  for (int i = 1; i < length; i++)
    if (nums[i] > max)
      max = nums[i];

  return max;
}

int get_min(const int *nums, int length) {
  int min = nums[0];
  for (int i = 1; i < length; i++)
    if (nums[i] < min)
      min = nums[i];

  return min;
}

int main(void) {
  int n;
  scanf("%d", &n);

  int *nums = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
    scanf("%d", &nums[i]);

  printf("%d %d\n", get_min(nums, n), get_max(nums, n));

  free(nums);
}
