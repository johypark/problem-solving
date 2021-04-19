// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>
#include <stdlib.h>

int get_max(const int* numbers, size_t length) {
  int max = numbers[0];

  for (size_t i = 1; i < length; i++)
    if (numbers[i] > max) max = numbers[i];

  return max;
}

int get_min(const int* numbers, size_t length) {
  int min = numbers[0];

  for (size_t i = 1; i < length; i++)
    if (numbers[i] < min) min = numbers[i];

  return min;
}

int main(int argc, char* argv[]) {
  size_t n;
  int* numbers;

  scanf(" %zu", &n);

  numbers = malloc(sizeof(int) * n);
  for (size_t i = 0; i < n; i++) scanf(" %d", &numbers[i]);

  printf("%d %d\n", get_min(numbers, n), get_max(numbers, n));

  free(numbers);
}
