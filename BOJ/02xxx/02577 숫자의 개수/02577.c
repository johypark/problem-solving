// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>
#include <stdlib.h>

size_t* get_numbers_used(size_t number) {
  size_t* numbers_used = calloc(10, sizeof(size_t));

  while (number > 0) {
    numbers_used[number % 10]++;
    number /= 10;
  }

  return numbers_used;
}

int main(int argc, char* argv[]) {
  size_t a, b, c;
  size_t* numbers_used;

  scanf(" %zu %zu %zu", &a, &b, &c);

  numbers_used = get_numbers_used(a * b * c);
  for (size_t i = 0; i < 10; i++) printf("%zu\n", numbers_used[i]);

  free(numbers_used);
}
