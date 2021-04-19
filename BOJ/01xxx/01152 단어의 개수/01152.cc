// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <string>

size_t CountWords(const std::string& string) {
  size_t count = 0;
  bool is_space = true;

  for (const char& ch : string) {
    if (is_space && !isspace(ch)) count++;
    is_space = isspace(ch);
  }

  return count;
}

int main(int argc, char* argv[]) {
  std::string string;

  getline(std::cin, string);

  std::cout << CountWords(string) << std::endl;
}
