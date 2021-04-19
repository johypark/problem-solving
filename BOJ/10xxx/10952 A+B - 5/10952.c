// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdbool.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
  size_t a, b;

  while (true) {
    scanf(" %zu %zu", &a, &b);

    if (a == 0 && b == 0) break;

    printf("%zu\n", a + b);
  }
}
