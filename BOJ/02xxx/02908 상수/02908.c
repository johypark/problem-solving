#include <stdio.h>

int get_num_sangsu(int n) { return n / 100 + n / 10 % 10 * 10 + n % 10 * 100; }

int get_answer_sangsu(int a, int b) {
  int a_sangsu = get_num_sangsu(a);
  int b_sangsu = get_num_sangsu(b);

  return a_sangsu > b_sangsu ? a_sangsu : b_sangsu;
}

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);

  printf("%d\n", get_answer_sangsu(a, b));
}
