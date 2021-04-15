// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <array>
#include <iostream>
#include <string>

char GetMostCommonAlphabet(const std::string& string) {
  std::array<size_t, 26> count_array = {0};
  size_t count = 0;
  char result = '?';

  // Count the alphabets are used
  for (const char& alphabet : string) count_array[toupper(alphabet) - 'A']++;

  for (size_t i = 0; i < count_array.size(); i++) {
    if (count_array[i] > count) {
      // If the current alphabet is used more often
      count = count_array[i];
      result = 'A' + i;
    } else if (count_array[i] == count) {
      // If the most used alphabet is duplicated
      result = '?';
    }
  }

  return result;
}

int main(int argc, char* argv[]) {
  std::string string;

  std::cin >> string;

  std::cout << GetMostCommonAlphabet(string) << std::endl;
}
