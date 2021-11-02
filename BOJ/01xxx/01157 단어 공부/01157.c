#include <ctype.h>
#include <stdio.h>
#include <string.h>

enum { MAX_LENGTH = 1000000 };

char get_most_common_alphabet(const char *str) {
  const int ALPHABET_NUM = 26;
  const char UNKNOWN = '?';
  int length = strlen(str);
  int alphabet_counts[ALPHABET_NUM] = {0};
  int count = 0;
  char result = UNKNOWN;

  // Count the alphabets are used
  for (int i = 0; i < length; i++)
    alphabet_counts[toupper(str[i]) - 'A']++;

  for (int i = 0; i < ALPHABET_NUM; i++) {
    if (alphabet_counts[i] > count) {
      // If the current alphabet is used more often
      count = alphabet_counts[i];
      result = 'A' + i;
    } else if (alphabet_counts[i] == count) {
      // If the most used alphabet is duplicated
      result = UNKNOWN;
    }
  }

  return result;
}

int main(void) {
  char str[MAX_LENGTH + 1];
  scanf("%s", str);

  printf("%c\n", get_most_common_alphabet(str));
}
