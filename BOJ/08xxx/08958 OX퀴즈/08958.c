#include <stdio.h>
#include <string.h>

enum { MAX_LENGTH = 80 };

int get_score(const char *str) {
  int length = strlen(str);
  int count = 0;
  int score = 0;
  for (int i = 0; i < length; i++) {
    if (str[i] == 'O')
      score += ++count;
    else
      count = 0;
  }

  return score;
}

int main(void) {
  int n;
  scanf("%d", &n);

  char str[MAX_LENGTH];
  for (int i = 0; i < n; i++) {
    scanf("%s", str);
    printf("%d\n", get_score(str));
  }
}
