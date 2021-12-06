#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.second == b.second)
    return a.first < b.first;

  return a.second < b.second;
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> points(n);
  for (auto &[x, y] : points)
    cin >> x >> y;

  sort(points.begin(), points.end(), compare);

  for (const auto &[x, y] : points)
    cout << x << ' ' << y << '\n';
}
