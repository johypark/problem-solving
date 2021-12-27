#include <stdio.h>
#include <stdlib.h>

void minmax(const int *nums, int length, int *min, int *max) {
  *min = nums[0];
  *max = nums[0];
  for (int i = 1; i < length; i++) {
    if (nums[i] < *min)
      *min = nums[i];
    if (nums[i] > *max)
      *max = nums[i];
  }
}

int main(void) {
  int n;
  scanf("%d", &n);

  int *nums = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
    scanf("%d", &nums[i]);

  int min_num, max_num;
  minmax(nums, n, &min_num, &max_num);

  printf("%d %d\n", min_num, max_num);

  free(nums);
}
