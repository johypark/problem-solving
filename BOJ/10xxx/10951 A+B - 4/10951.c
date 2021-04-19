// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

int main(int argc, char* argv[]) {
  size_t a, b;

  while (scanf(" %zu %zu", &a, &b) != EOF) printf("%zu\n", a + b);
}
