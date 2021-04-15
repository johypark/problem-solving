// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

enum { MAX_LENGTH = 5 };

bool is_palindrom(const char* word) {
  size_t length = strlen(word);

  for (size_t i = 0; i < length / 2; i++)
    if (word[i] != word[length - 1 - i]) return false;

  return true;
}

int main(int argc, char* argv[]) {
  char number[MAX_LENGTH + 1];

  while (true) {
    scanf("%s", number);

    if (!strcmp(number, "0")) return 0;

    printf("%s\n", is_palindrom(number) ? "yes" : "no");
  }
}
