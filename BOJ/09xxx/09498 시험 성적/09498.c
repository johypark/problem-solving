#include <stdio.h>

char get_grade(int score) {
  if (score >= 90)
    return 'A';
  if (score >= 80)
    return 'B';
  if (score >= 70)
    return 'C';
  if (score >= 60)
    return 'D';

  return 'F';
}

int main(void) {
  int score;

  scanf("%d", &score);

  printf("%c\n", get_grade(score));
}
