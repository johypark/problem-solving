// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>
#include <stdlib.h>

size_t get_max_cable_length(size_t* cables, size_t length, size_t n) {
  size_t max = cables[0];

  for (size_t i = 1; i < length; i++)
    if (max < cables[i]) max = cables[i];

  size_t left = 1;
  size_t right = max;
  size_t mid = (left + right) / 2;
  size_t count;

  while (left <= right) {
    count = 0;

    for (size_t i = 0; i < length; i++) count += cables[i] / mid;

    if (count >= n)
      left = mid + 1;
    else if (count < n)
      right = mid - 1;

    mid = (left + right) / 2;
  }

  return mid;
}

int main(int argc, char* argv[]) {
  size_t k, n;
  size_t* cables;

  scanf("%zu %zu", &k, &n);

  cables = malloc(sizeof(size_t) * k);

  for (size_t i = 0; i < k; i++) scanf("%zu", &cables[i]);

  printf("%zu\n", get_max_cable_length(cables, k, n));

  free(cables);
}
