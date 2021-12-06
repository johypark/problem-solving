#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> points(n);
  for (auto &[x, y] : points)
    cin >> x >> y;

  sort(points.begin(), points.end());

  for (const auto &[x, y] : points)
    cout << x << ' ' << y << '\n';
}
