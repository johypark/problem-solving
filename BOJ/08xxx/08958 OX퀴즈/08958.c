// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>
#include <string.h>

enum { MAX_LENGTH = 80 };

size_t get_score(const char* string) {
  size_t count = 0;
  size_t score = 0;

  for (size_t i = 0; i < strlen(string); i++) {
    if (string[i] == 'O')
      score += ++count;
    else
      count = 0;
  }

  return score;
}

int main(int argc, char* argv[]) {
  size_t n;
  char string[MAX_LENGTH];

  scanf(" %zu", &n);

  for (size_t i = 0; i < n; i++) {
    scanf(" %s", string);
    printf("%zu\n", get_score(string));
  }
}
