#include <iostream>

enum { PRECISION = 6 };
const double PI = 3.141592653589793238463;

using namespace std;

int main() {
  int r;
  cin >> r;

  // Save cout flags
  ios_base::fmtflags flags(cout.flags());

  cout.precision(PRECISION);
  cout << fixed;

  cout << r * r * PI << '\n';
  cout << r * r * 2.0 << endl;

  // Reset cout flags
  cout.flags(flags);
}
