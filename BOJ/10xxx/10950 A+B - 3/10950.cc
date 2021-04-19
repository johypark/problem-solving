// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

int main(int argc, char* argv[]) {
  size_t t, a, b;

  std::cin >> t;

  for (size_t i = 0; i < t; i++) {
    std::cin >> a >> b;
    std::cout << a + b << '\n';
  }
}
