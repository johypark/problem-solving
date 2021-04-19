// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <string>

enum { MAX_LENGTH = 100 };

int GetAlphabetFirstAppearance(const std::string& string, char alphabet) {
  for (int i = 0; i < string.size(); i++)
    if (string[i] == alphabet) return i;

  return -1;
}

int main(int argc, char* argv[]) {
  std::string s;

  std::cin >> s;

  for (size_t i = 0; i < 26; i++)
    std::cout << GetAlphabetFirstAppearance(s, 'a' + i) << ' ';

  std::cout << std::endl;
}
