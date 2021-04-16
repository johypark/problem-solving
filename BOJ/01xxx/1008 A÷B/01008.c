// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

int main(int argc, char* argv[]) {
  int a, b;
  double quotient;

  scanf(" %d %d", &a, &b);

  quotient = a;
  quotient /= b;

  printf("%.9f\n", quotient);
}
