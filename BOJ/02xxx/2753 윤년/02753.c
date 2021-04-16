// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdbool.h>
#include <stdio.h>

bool is_leap_year(size_t year) {
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int main(int argc, char* argv[]) {
  size_t year;

  scanf(" %zu", &year);

  printf("%d\n", is_leap_year(year));
}
