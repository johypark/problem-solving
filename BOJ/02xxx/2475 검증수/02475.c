// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

enum { LENGTH = 5 };

size_t get_verification_number(const size_t* numbers, size_t length) {
  size_t verification_number;
  size_t sum = 0;

  for (size_t i = 0; i < length; i++) sum += numbers[i] * numbers[i];

  verification_number = sum % 10;
  return verification_number;
}

int main(int argc, char* argv[]) {
  size_t numbers[LENGTH];

  for (size_t i = 0; i < LENGTH; i++) scanf(" %zu", &numbers[i]);

  printf("%zu\n", get_verification_number(numbers, LENGTH));
}
