#include <iostream>

using namespace std;

int getQuadrantNum(int x, int y) {
  if (y > 0)
    return x < 0 ? 2 : 1;
  else
    return x < 0 ? 3 : 4;
}

int main() {
  int x, y;
  cin >> x >> y;

  cout << getQuadrantNum(x, y) << endl;
}
