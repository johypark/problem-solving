// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <vector>

std::vector<size_t> GetNumbersUsed(size_t number) {
  std::vector<size_t> numbers_used(10);

  while (number > 0) {
    numbers_used[number % 10]++;
    number /= 10;
  }

  return numbers_used;
}

int main(int argc, char* argv[]) {
  size_t a, b, c;

  std::cin >> a >> b >> c;

  std::vector<size_t> numbers_used = GetNumbersUsed(a * b * c);
  for (const size_t& number : numbers_used) std::cout << number << '\n';
}
