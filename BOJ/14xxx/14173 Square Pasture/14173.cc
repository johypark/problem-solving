#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  int a1, b1, a2, b2;
  cin >> a1 >> b1 >> a2 >> b2;

  x1 = min(x1, a1);
  y1 = min(y1, b1);
  x2 = max(x2, a2);
  y2 = max(y2, b2);

  int length = max(x2 - x1, y2 - y1);
  cout << length * length << endl;
}
