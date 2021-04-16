// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

enum { MULTIPLICATION_TABLE_TO = 9 };

void print_multiplication_table(size_t n, size_t to) {
  for (size_t i = 1; i <= to; i++) printf("%zu * %zu = %zu\n", n, i, n * i);
}

int main(int argc, char* argv[]) {
  size_t n;

  scanf(" %zu", &n);

  print_multiplication_table(n, MULTIPLICATION_TABLE_TO);
}
