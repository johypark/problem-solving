#include <array>
#include <iostream>

using namespace std;

int main() {
  array<pair<int, int>, 3> points;
  for (auto &[x, y] : points)
    cin >> x >> y;

  pair<int, int> fourthPoint = points[0];
  if (fourthPoint.first == points[1].first)
    fourthPoint.first = points[2].first;
  else if (fourthPoint.first == points[2].first)
    fourthPoint.first = points[1].first;

  if (fourthPoint.second == points[1].second)
    fourthPoint.second = points[2].second;
  else if (fourthPoint.second == points[2].second)
    fourthPoint.second = points[1].second;

  cout << fourthPoint.first << ' ' << fourthPoint.second << endl;
}
