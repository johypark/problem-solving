// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

void PrintMultiplicationTable(size_t n, size_t to = 9) {
  for (size_t i = 1; i <= to; i++)
    std::cout << n << " * " << i << " = " << n * i << '\n';
}

int main(int argc, char* argv[]) {
  size_t n;

  std::cin >> n;

  PrintMultiplicationTable(n);
}
