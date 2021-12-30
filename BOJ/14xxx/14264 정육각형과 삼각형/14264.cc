#include <cmath>
#include <iostream>

enum { PRECISION = 10 };

using namespace std;

int main() {
  double l;
  cin >> l;

  // Save cout flags
  ios_base::fmtflags flags(cout.flags());

  cout.precision(PRECISION);
  cout << fixed << l * l * sqrt(3) / 4 << endl;

  // Reset cout flags
  cout.flags(flags);
}
