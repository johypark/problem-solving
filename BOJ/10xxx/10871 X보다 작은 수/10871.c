// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  size_t n, x;
  size_t* a;

  scanf(" %zu %zu", &n, &x);

  a = malloc(sizeof(size_t) * n);
  for (size_t i = 0; i < n; i++) {
    scanf(" %zu", &a[i]);

    if (a[i] < x) printf("%zu ", a[i]);
  }

  printf("\n");
}
