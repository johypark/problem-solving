// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <vector>

enum { LENGTH = 9 };

size_t GetMaxNumberIndex(std::vector<size_t> numbers) {
  return std::max_element(numbers.begin(), numbers.end()) - numbers.begin();
}

int main(int argc, char* argv[]) {
  std::vector<size_t> numbers(LENGTH);
  size_t max_index;

  for (size_t& number : numbers) std::cin >> number;

  max_index = GetMaxNumberIndex(numbers);
  std::cout << numbers[max_index] << '\n' << max_index + 1 << std::endl;
}
