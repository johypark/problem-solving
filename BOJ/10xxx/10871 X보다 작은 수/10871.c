#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, x;
  scanf("%d%d", &n, &x);

  int *a = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);

    if (a[i] < x)
      printf("%d ", a[i]);
  }

  printf("\n");
}
