// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

int main(int argc, char* argv[]) {
  size_t t, a, b;

  scanf(" %zu", &t);

  for (size_t i = 0; i < t; i++) {
    scanf(" %zu %zu", &a, &b);
    printf("%zu\n", a + b);
  }
}
