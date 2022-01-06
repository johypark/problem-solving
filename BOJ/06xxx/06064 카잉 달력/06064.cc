#include <iostream>
#include <numeric>

using namespace std;

int getCainYear(int m, int n, int x, int y) {
  int lastYear = lcm(m, n);
  for (int i = x; i <= lastYear; i += m)
    if ((i - 1) % n == y - 1)
      return i;

  return -1;
}

int main() {
  int t;
  cin >> t;

  int m, n, x, y;
  for (int i = 0; i < t; i++) {
    cin >> m >> n >> x >> y;

    cout << getCainYear(m, n, x, y) << '\n';
  }
}
