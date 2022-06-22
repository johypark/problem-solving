#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n, a, b, c, d;
  cin >> n >> a >> b >> c >> d;

  int x = (n + a - 1) / a * b;
  int y = (n + c - 1) / c * d;
  cout << min(x, y) << endl;
}
