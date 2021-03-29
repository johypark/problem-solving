// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <string>

char GetMostCommonAlphabet(std::string string) {
  size_t count_array[26] = {0};
  size_t count = 0;
  char result = '?';

  // Count the alphabets are used
  for (size_t i = 0; i < string.length(); i++) {
    count_array[toupper(string[i]) - 'A']++;
  }

  for (size_t i = 0; i < 26; i++) {
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
