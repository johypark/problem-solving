#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum { MAX_LENGTH = 20 };

char *get_repeating_char_string(const char *str, int n) {
  int length = strlen(str);
  char *repeating_char_string = malloc(sizeof(char) * (length * n + 1));

  for (int i = 0; i < length; i++)
    for (int j = 0; j < n; j++)
      repeating_char_string[i * n + j] = str[i];

  repeating_char_string[length * n] = '\0';

  return repeating_char_string;
}

int main(void) {
  int t;
  scanf("%d", &t);

  int r;
  char s[MAX_LENGTH + 1];
  char *p;
  for (int i = 0; i < t; i++) {
    scanf("%d%s", &r, s);

    p = get_repeating_char_string(s, r);
    printf("%s\n", p);

    free(p);
  }
}
