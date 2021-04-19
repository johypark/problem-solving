// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdbool.h>
#include <stdio.h>

enum { LENGTH = 8 };

void print_scale_order(const size_t* numbers, size_t length) {
  bool is_ascending = true;
  bool is_descending = true;

  for (size_t i = 0; i < length; i++) {
    if (numbers[i] != i + 1) is_ascending = false;
    if (numbers[i] != length - i) is_descending = false;
  }

  if (is_ascending)
    printf("ascending");
  else if (is_descending)
    printf("descending");
  else
    printf("mixed");

  printf("\n");
}

int main(int argc, char* argv[]) {
  size_t numbers[LENGTH];

  for (size_t i = 0; i < LENGTH; i++) scanf(" %zu", &numbers[i]);

  print_scale_order(numbers, LENGTH);
}
