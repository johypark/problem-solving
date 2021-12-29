#include <cmath>
#include <iostream>

using namespace std;

int getMinMoveCount(int length) {
  double sqrtLength = sqrt(length);
  int roundSqrtLength = round(sqrtLength);

  if (sqrtLength <= roundSqrtLength)
    return roundSqrtLength * 2 - 1;

  return roundSqrtLength * 2;
}

int main() {
  int t;
  cin >> t;

  int x, y;
  for (int i = 0; i < t; i++) {
    cin >> x >> y;
    cout << getMinMoveCount(y - x) << '\n';
  }
}
