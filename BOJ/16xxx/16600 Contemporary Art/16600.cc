#include <cmath>
#include <iostream>

enum { PRECISION = 6 };

using namespace std;

int main() {
  double a;
  cin >> a;

  // Save cout flags
  ios_base::fmtflags flags(cout.flags());

  cout.precision(PRECISION);
  cout << fixed << sqrt(a) * 4 << endl;

  // Reset cout flags
  cout.flags(flags);
}
