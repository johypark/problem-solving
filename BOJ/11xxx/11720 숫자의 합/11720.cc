// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

int main(int argc, char* argv[]) {
  size_t n, sum = 0;
  char ch;

  std::cin >> n;
  for (size_t i = 0; i < n; i++) {
    std::cin >> ch;
    sum += ch - '0';
  }

  std::cout << sum << std::endl;
}
