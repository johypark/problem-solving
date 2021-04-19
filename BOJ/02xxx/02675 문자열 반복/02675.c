// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { MAX_LENGTH = 20 };

char* get_repeating_char_string(const char* string, size_t n) {
  size_t length = strlen(string);
  char* repeating_char_string = malloc(sizeof(char) * (length * n + 1));

  for (size_t i = 0; i < length; i++)
    for (size_t j = 0; j < n; j++) repeating_char_string[i * n + j] = string[i];

  repeating_char_string[length * n] = '\0';

  return repeating_char_string;
}

int main(int argc, char* argv[]) {
  size_t t, r;
  char s[MAX_LENGTH + 1];
  char* p;

  scanf(" %zu", &t);

  for (size_t i = 0; i < t; i++) {
    scanf(" %zu %s", &r, s);

    p = get_repeating_char_string(s, r);
    printf("%s\n", p);

    free(p);
  }
}
