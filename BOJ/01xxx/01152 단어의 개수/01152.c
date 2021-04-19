// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

enum { MAX_LENGTH = 1000000 };

size_t count_words(const char* string) {
  size_t count = 0;
  bool is_space = true;

  for (size_t i = 0; i < strlen(string); i++) {
    if (is_space && !isspace(string[i])) count++;
    is_space = isspace(string[i]);
  }

  return count;
}

int main(int argc, char* argv[]) {
  char string[MAX_LENGTH + 1];

  scanf(" %[^\n]", string);

  printf("%zu\n", count_words(string));
}
