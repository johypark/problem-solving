// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

int main(int argc, char* argv[]) {
  size_t a, b;

  while (true) {
    std::cin >> a >> b;

    if (a == 0 && b == 0) break;

    std::cout << a + b << '\n';
  }
}
