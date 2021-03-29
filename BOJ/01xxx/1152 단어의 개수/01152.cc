// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <string>

size_t CountWords(const std::string& string) {
  size_t count = 0;

  for (size_t i = 0; i < string.length(); i++)
    // If string[i] is the end of a word
    if (isgraph(string[i]) && !isgraph(string[i + 1])) count++;

  return count;
}

int main(int argc, char* argv[]) {
  std::string string;

  getline(std::cin, string);

  std::cout << CountWords(string) << std::endl;
}
