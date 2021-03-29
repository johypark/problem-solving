// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

enum { MAX_LENGTH = 1000000 };

size_t count_words(const char* string) {
  size_t count = 0;

  for (size_t i = 0; i < strlen(string); i++)
    // If string[i] is the end of a word
    if (isgraph(string[i]) && !isgraph(string[i + 1])) count++;

  return count;
}

int main(int argc, char* argv[]) {
  char string[MAX_LENGTH];

  fgets(string, sizeof(string), stdin);

  printf("%zu\n", count_words(string));
}
