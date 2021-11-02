#include <stdbool.h>
#include <stdio.h>

bool is_leap_year(int year) {
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int main(void) {
  int year;
  scanf("%d", &year);

  printf("%d\n", is_leap_year(year));
}
