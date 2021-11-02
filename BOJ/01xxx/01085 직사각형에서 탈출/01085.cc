#include <iostream>

using namespace std;

int getMinDistance(int x, int y, int width, int height) {
  int distanceX = x < width - x ? x : width - x;
  int distanceY = y < height - y ? y : height - y;

  return distanceX < distanceY ? distanceX : distanceY;
}

int main() {
  int x, y, w, h;
  cin >> x >> y >> w >> h;

  cout << getMinDistance(x, y, w, h) << endl;
}
