// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <array>
#include <iostream>

enum { LENGTH = 10, DIVISOR = 42 };

int main(int argc, char* argv[]) {
  size_t n;
  std::array<size_t, DIVISOR> is_numbers_exist = {false};
  size_t count = 0;

  for (size_t i = 0; i < LENGTH; i++) {
    scanf(" %zu", &n);

    if (!is_numbers_exist[n % DIVISOR]) {
      is_numbers_exist[n % DIVISOR] = true;
      count++;
    }
  }

  std::cout << count << std::endl;
}
