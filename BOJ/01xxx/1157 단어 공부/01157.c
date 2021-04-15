// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum { MAX_LENGTH = 1000000 };

char get_most_common_alphabet(const char* string) {
  size_t count_array[26] = {0};
  size_t count = 0;
  char result = '?';

  // Count the alphabets are used
  for (size_t i = 0; i < strlen(string); i++) {
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
  char string[MAX_LENGTH + 1];

  scanf("%s", string);

  printf("%c\n", get_most_common_alphabet(string));
}
