// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

void PrintStars(size_t n) {
  for (size_t i = 1; i <= n; i++) {
    for (size_t j = 0; j < i; j++) std::cout << '*';

    std::cout << '\n';
  }
}

int main(int argc, char* argv[]) {
  size_t n;

  std::cin >> n;

  PrintStars(n);
}
