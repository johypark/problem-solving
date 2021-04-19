// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
  size_t n;

  std::cin >> n;

  std::vector<int> numbers(n);
  for (int& number : numbers) std::cin >> number;

  std::cout << *std::min_element(numbers.begin(), numbers.end()) << ' '
            << *std::max_element(numbers.begin(), numbers.end()) << std::endl;
}
