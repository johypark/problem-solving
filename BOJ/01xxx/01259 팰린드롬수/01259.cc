// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <string>

bool IsPalindrom(const std::string& word) {
  for (size_t i = 0; i < word.size() / 2; i++)
    if (word[i] != word[word.size() - 1 - i]) return false;

  return true;
}

int main(int argc, char* argv[]) {
  std::string number;

  while (true) {
    std::cin >> number;

    if (number == "0") return 0;

    std::cout << (IsPalindrom(number) ? "yes" : "no") << std::endl;
  }
}
