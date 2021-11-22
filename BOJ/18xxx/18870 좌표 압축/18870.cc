#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> compressPoints(const vector<int> &points) {
  vector<int> uniquePoints(points);
  sort(uniquePoints.begin(), uniquePoints.end());
  uniquePoints.erase(unique(uniquePoints.begin(), uniquePoints.end()),
                     uniquePoints.end());

  vector<int> compressedPoints;
  compressedPoints.reserve(points.size());
  int compressedPoint;
  for (const int &point : points) {
    compressedPoint =
        lower_bound(uniquePoints.begin(), uniquePoints.end(), point) -
        uniquePoints.begin();
    compressedPoints.push_back(compressedPoint);
  }

  return compressedPoints;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> points(n);
  for (int &point : points)
    cin >> point;

  vector<int> compressedPoints = compressPoints(points);
  for (const int &point : compressedPoints)
    cout << point << ' ';

  cout << endl;
}
