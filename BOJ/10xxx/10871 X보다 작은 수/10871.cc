// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  size_t n, x;

  std::cin >> n >> x;

  std::vector<size_t> a(n);
  for (size_t& number : a) {
    std::cin >> number;

    if (number < x) std::cout << number << ' ';
  }

  std::cout << std::endl;
}
