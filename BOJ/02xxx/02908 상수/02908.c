// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

int get_number_sangsu(int n) {
  return n / 100 + n / 10 % 10 * 10 + n % 10 * 100;
}

int get_answer_sangsu(int a, int b) {
  int a_sangsu = get_number_sangsu(a);
  int b_sangsu = get_number_sangsu(b);

  return a_sangsu > b_sangsu ? a_sangsu : b_sangsu;
}

int main(int argc, char* argv[]) {
  int a, b;

  scanf(" %d %d", &a, &b);

  printf("%d\n", get_answer_sangsu(a, b));
}
