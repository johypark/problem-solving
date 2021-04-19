// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdbool.h>
#include <stdio.h>

enum { LENGTH = 10, DIVISOR = 42 };

int main(int argc, char* argv[]) {
  size_t n;
  bool is_numbers_exist[DIVISOR] = {false};
  size_t count = 0;

  for (size_t i = 0; i < LENGTH; i++) {
    scanf(" %zu", &n);

    if (!is_numbers_exist[n % DIVISOR]) {
      is_numbers_exist[n % DIVISOR] = true;
      count++;
    }
  }

  printf("%zu\n", count);
}
