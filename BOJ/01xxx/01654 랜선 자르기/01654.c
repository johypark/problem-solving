#include <stdio.h>
#include <stdlib.h>

int get_max_cable_length(const int *cables, int length, int n) {
  long long max = cables[0];
  for (int i = 1; i < length; i++)
    if (max < cables[i])
      max = cables[i];

  long long low = 1;
  long long high = max + 1;
  long long mid, count;
  while (low < high) {
    mid = low + (high - low) / 2;
    count = 0;
    for (int i = 0; i < length; i++)
      count += cables[i] / mid;

    if (count >= n)
      low = mid + 1;
    else
      high = mid;
  }

  // Return upper bound - 1
  return low - 1;
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
