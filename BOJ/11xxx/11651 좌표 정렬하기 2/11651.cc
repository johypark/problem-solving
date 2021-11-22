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
  for (auto &point : points)
    cin >> point.first >> point.second;

  sort(points.begin(), points.end(), compare);

  for (const auto &point : points)
    cout << point.first << ' ' << point.second << '\n';
}
