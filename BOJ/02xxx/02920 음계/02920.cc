// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <vector>

enum { LENGTH = 8 };

void PrintScaleOrder(const std::vector<size_t>& numbers) {
  bool is_ascending = true;
  bool is_descending = true;

  for (size_t i = 0; i < numbers.size(); i++) {
    if (numbers[i] != i + 1) is_ascending = false;
    if (numbers[i] != numbers.size() - i) is_descending = false;
  }

  if (is_ascending)
    std::cout << "ascending";
  else if (is_descending)
    std::cout << "descending";
  else
    std::cout << "mixed";

  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  std::vector<size_t> numbers(LENGTH);

  for (size_t& number : numbers) std::cin >> number;

  PrintScaleOrder(numbers);
}
