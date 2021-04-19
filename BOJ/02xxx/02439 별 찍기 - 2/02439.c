// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

void print_stars(size_t n) {
  for (size_t i = 1; i <= n; i++) {
    for (size_t j = 0; j < n - i; j++) printf(" ");
    for (size_t j = 0; j < i; j++) printf("*");

    printf("\n");
  }
}

int main(int argc, char* argv[]) {
  size_t n;

  scanf(" %zu", &n);

  print_stars(n);
}
