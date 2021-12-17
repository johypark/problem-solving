#include <algorithm>
#include <iostream>

using namespace std;

int getMinDistance(int x, int y, int width, int height) {
  int distanceX = min(x, width - x);
  int distanceY = min(y, height - y);

  return min(distanceX, distanceY);
}

int main() {
  int x, y, w, h;
  cin >> x >> y >> w >> h;

  cout << getMinDistance(x, y, w, h) << endl;
}
