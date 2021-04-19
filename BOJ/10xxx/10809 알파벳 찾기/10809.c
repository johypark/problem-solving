// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>
#include <string.h>

enum { MAX_LENGTH = 100 };

int get_alphabet_first_appearance(const char* string, char alphabet) {
  size_t length = strlen(string);

  for (size_t i = 0; i < length; i++)
    if (string[i] == alphabet) return i;

  return -1;
}

int main(int argc, char* argv[]) {
  char s[MAX_LENGTH];

  scanf(" %s", s);

  for (size_t i = 0; i < 26; i++)
    printf("%d ", get_alphabet_first_appearance(s, 'a' + i));

  printf("\n");
}
