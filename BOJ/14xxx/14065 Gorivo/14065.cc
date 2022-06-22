#include <iostream>

enum { PRECISION = 6 };

using namespace std;

int main() {
  double x;
  cin >> x;

  // Save cout flags
  ios_base::fmtflags flags(cout.flags());

  cout.precision(PRECISION);
  cout << fixed << 3.785411784 / (x * 1609.344 / 100000) << endl;

  // Reset cout flags
  cout.flags(flags);
}
