#include <stdbool.h>
#include <stdio.h>
#include <string.h>

enum { MAX_LENGTH = 5 };

bool is_palindrom(const char *word) {
  int length = strlen(word);
  for (int i = 0; i < length / 2; i++)
    if (word[i] != word[length - 1 - i])
      return false;

  return true;
}

int main(void) {
  char number[MAX_LENGTH + 1];
  while (true) {
    scanf("%s", number);

    if (!strcmp(number, "0"))
      return 0;

    printf("%s\n", is_palindrom(number) ? "yes" : "no");
  }
}
