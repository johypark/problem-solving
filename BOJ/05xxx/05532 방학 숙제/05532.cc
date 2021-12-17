#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int l, a, b, c, d;
  cin >> l >> a >> b >> c >> d;

  cout << l - max(ceil(static_cast<double>(a) / c),
                  ceil(static_cast<double>(b) / d))
       << endl;
}
