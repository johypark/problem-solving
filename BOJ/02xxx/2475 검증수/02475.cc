// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <vector>

enum { LENGTH = 5 };

size_t GetVerificationNumber(const std::vector<size_t>& numbers) {
  size_t verification_number;
  size_t sum = 0;

  for (const size_t& number : numbers) sum += number * number;

  verification_number = sum % 10;
  return verification_number;
}

int main(int argc, char* argv[]) {
  std::vector<size_t> numbers(LENGTH);

  for (size_t& number : numbers) std::cin >> number;

  printf("%zu\n", GetVerificationNumber(numbers));
}
