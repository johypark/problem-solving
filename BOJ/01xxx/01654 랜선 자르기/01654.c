#include <stdio.h>
#include <stdlib.h>

int get_max_cable_length(int *cables, int length, int n) {
  int max = cables[0];
  for (int i = 1; i < length; i++)
    if (max < cables[i])
      max = cables[i];

  unsigned int left = 1;
  unsigned int right = max;
  unsigned int mid = (left + right) / 2;
  int count;
  while (left <= right) {
    count = 0;
    for (int i = 0; i < length; i++)
      count += cables[i] / mid;

    if (count >= n)
      left = mid + 1;
    else
      right = mid - 1;

    mid = (left + right) / 2;
  }

  return mid;
}

int main(void) {
  int k, n;
  scanf("%d%d", &k, &n);

  int *cables = malloc(sizeof(int) * k);
  for (int i = 0; i < k; i++)
    scanf("%d", &cables[i]);

  printf("%d\n", get_max_cable_length(cables, k, n));

  free(cables);
}
