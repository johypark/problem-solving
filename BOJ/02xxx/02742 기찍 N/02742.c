// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

int main(int argc, char* argv[]) {
  size_t n;

  scanf(" %zu", &n);

  for (size_t i = n; i >= 1; i--) printf("%zu\n", i);
}
