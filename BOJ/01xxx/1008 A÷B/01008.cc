// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

int main(int argc, char* argv[]) {
  int a, b;

  std::cin >> a >> b;

  std::cout.setf(std::ios::fixed);
  std::cout.precision(9);

  std::cout << static_cast<double>(a) / b << std::endl;

  std::cout.precision(6);
  std::cout.unsetf(std::ios::fixed);
}
