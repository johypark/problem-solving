// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <string>

std::string GetRepeatingCharString(const std::string& string, size_t n) {
  std::string repeating_char_string;
  repeating_char_string.reserve(string.size() * n);

  for (const char& ch : string)
    for (size_t i = 0; i < n; i++) repeating_char_string.push_back(ch);

  return repeating_char_string;
}

int main(int argc, char* argv[]) {
  size_t t, r;
  std::string s, p;

  std::cin >> t;

  for (size_t i = 0; i < t; i++) {
    std::cin >> r >> s;

    p = GetRepeatingCharString(s, r);
    std::cout << p << '\n';
  }
}
