#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

enum { PRECISION = 6 };

using namespace std;

int main() {
  int r;
  cin >> r;

  // Save cout flags
  ios_base::fmtflags flags(cout.flags());

  cout.precision(PRECISION);
  cout << fixed;

  cout << r * r * M_PI << '\n';
  cout << r * r * 2.0 << endl;

  // Reset cout flags
  cout.flags(flags);
}
