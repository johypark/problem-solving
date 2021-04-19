// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <string>

size_t GetScore(const std::string& string) {
  size_t count = 0;
  size_t score = 0;

  for (const char& ch : string) {
    if (ch == 'O')
      score += ++count;
    else
      count = 0;
  }

  return score;
}

int main(int argc, char* argv[]) {
  size_t n;
  std::string string;

  std::cin >> n;

  for (size_t i = 0; i < n; i++) {
    std::cin >> string;
    std::cout << GetScore(string) << '\n';
  }
}
