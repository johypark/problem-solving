#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int a, b, c, d, p;
  cin >> a >> b >> c >> d >> p;

  int x = p * a;
  int y = b + (p < c ? 0 : (p - c) * d);

  cout << min(x, y) << endl;
}
