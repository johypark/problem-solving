#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

enum { MAX_LENGTH = 1000000 };

int count_words(const char *str) {
  int length = strlen(str);
  int count = 0;
  bool is_space = true;
  for (int i = 0; i < length; i++) {
    if (is_space && !isspace(str[i]))
      count++;
    is_space = isspace(str[i]);
  }

  return count;
}

int main(void) {
  char str[MAX_LENGTH + 1];
  scanf("%[^\n]", str);

  printf("%d\n", count_words(str));
}
