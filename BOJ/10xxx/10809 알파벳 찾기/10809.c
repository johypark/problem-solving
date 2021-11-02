#include <stdio.h>
#include <string.h>

enum { MAX_LENGTH = 100 };

int get_alphabet_first_appearance(const char *str, char alphabet) {
  int length = strlen(str);

  for (int i = 0; i < length; i++)
    if (str[i] == alphabet)
      return i;

  return -1;
}

int main(void) {
  char s[MAX_LENGTH];
  scanf("%s", s);

  for (int i = 0; i < 26; i++)
    printf("%d ", get_alphabet_first_appearance(s, 'a' + i));

  printf("\n");
}
