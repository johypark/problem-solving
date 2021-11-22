#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> points(n);
  for (auto &point : points)
    cin >> point.first >> point.second;

  sort(points.begin(), points.end());

  for (const auto &point : points)
    cout << point.first << ' ' << point.second << '\n';
}
