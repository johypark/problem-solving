// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

int main(int argc, char* argv[]) {
  int a, b;

  std::cin >> a >> b;

  if (a > b)
    std::cout << ">" << std::endl;
  else if (a < b)
    std::cout << "<" << std::endl;
  else
    std::cout << "==" << std::endl;
}
