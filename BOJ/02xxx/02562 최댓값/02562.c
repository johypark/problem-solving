#include <stdio.h>

enum { LENGTH = 9 };

int get_max_num_index(const int *nums, int length) {
  int max_index = -1;
  int max = 0;

  for (int i = 0; i < length; i++)
    if (max < nums[i]) {
      max_index = i;
      max = nums[i];
    }

  return max_index;
}

int main(void) {
  int nums[LENGTH];
  for (int i = 0; i < LENGTH; i++)
    scanf("%d", &nums[i]);

  int max_index = get_max_num_index(nums, LENGTH);
  printf("%d\n%d\n", nums[max_index], max_index + 1);
}
