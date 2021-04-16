// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <stack>
#include <vector>

void PrintStackLog(const std::vector<size_t>& numbers) {
  size_t count = 1;
  std::stack<size_t> stack;
  std::vector<char> log;

  log.reserve(numbers.size() * 2);

  for (const size_t& number : numbers) {
    // Push
    while (number >= count) {
      stack.push(count++);
      log.push_back('+');
    }

    // Pop
    if (stack.top() != number) {
      std::cout << "NO" << std::endl;
      return;
    }

    stack.pop();
    log.push_back('-');
  }

  for (const char& sign : log) std::cout << sign << '\n';
}

int main(int argc, char* argv[]) {
  size_t n;

  std::cin >> n;

  std::vector<size_t> numbers(n);
  for (size_t& number : numbers) std::cin >> number;

  PrintStackLog(numbers);
}
