// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

enum { LENGTH = 9 };

size_t get_max_number_index(const size_t* numbers, size_t length) {
  size_t max_index = -1;
  size_t max = 0;

  for (size_t i = 0; i < length; i++)
    if (max < numbers[i]) {
      max_index = i;
      max = numbers[i];
    }

  return max_index;
}

int main(int argc, char* argv[]) {
  size_t numbers[LENGTH];
  size_t max_index;

  for (size_t i = 0; i < LENGTH; i++) scanf(" %zu", &numbers[i]);

  max_index = get_max_number_index(numbers, LENGTH);
  printf("%zu\n%zu\n", numbers[max_index], max_index + 1);
}
