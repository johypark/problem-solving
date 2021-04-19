// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

int main(int argc, char* argv[]) {
  size_t n, sum = 0;
  char ch;

  scanf(" %zu", &n);
  for (size_t i = 0; i < n; i++) {
    scanf(" %c", &ch);
    sum += ch - '0';
  }

  printf("%zu\n", sum);
}
