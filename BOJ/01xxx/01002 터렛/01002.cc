#include <cmath>
#include <iostream>

using namespace std;

int getTangentPointCount(int x1, int y1, int r1, int x2, int y2, int r2) {
  int dx = x2 - x1;
  int dy = y2 - y1;
  double d = sqrt(dx * dx + dy * dy);

  if (d == 0 && r1 == r2)
    return -1;
  if (d > r1 + r2 || d < abs(r1 - r2))
    return 0;
  if (d == r1 + r2 || d == abs(r1 - r2))
    return 1;

  return 2;
}

int main() {
  int t;
  cin >> t;

  int x1, y1, r1, x2, y2, r2;
  for (int i = 0; i < t; i++) {
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    cout << getTangentPointCount(x1, y1, r1, x2, y2, r2) << '\n';
  }
}
