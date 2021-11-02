#include <stdio.h>
#include <stdlib.h>

double get_average_sejun(const int *scores, int length) {
  int sum = 0, max = 0;
  for (int i = 0; i < length; i++) {
    if (max < scores[i])
      max = scores[i];
    sum += scores[i];
  }

  double average = (double)sum / length;
  return average / max * 100;
}

int main(void) {
  int n;
  scanf("%d", &n);

  int *scores = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
    scanf("%d", &scores[i]);

  printf("%f\n", get_average_sejun(scores, n));

  free(scores);
}
