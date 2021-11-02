#include <stdio.h>

int get_min_distance(int x, int y, int width, int height) {
  int distance_x = x < width - x ? x : width - x;
  int distance_y = y < height - y ? y : height - y;

  return distance_x < distance_y ? distance_x : distance_y;
}

int main(void) {
  int x, y, w, h;
  scanf("%d%d%d%d", &x, &y, &w, &h);

  printf("%d\n", get_min_distance(x, y, w, h));
}
