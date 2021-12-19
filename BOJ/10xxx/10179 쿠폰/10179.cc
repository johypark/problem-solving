#include <iostream>

enum { COUPON_PERCENT = 20, PRECISION = 2 };

using namespace std;

int main() {
  int t;
  cin >> t;

  // Save cout flags
  ios_base::fmtflags flags(cout.flags());
  cout.precision(PRECISION);
  cout << fixed;

  double cost;
  for (int i = 0; i < t; i++) {
    cin >> cost;

    cout << '$' << cost * (100 - COUPON_PERCENT) / 100 << '\n';
  }

  // Reset cout flags
  cout.flags(flags);
}
