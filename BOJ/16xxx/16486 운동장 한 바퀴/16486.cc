#include <iostream>

enum { PRECISION = 6 };

using namespace std;

int main() {
  const double PI = 3.141592;

  int d1, d2;
  cin >> d1 >> d2;

  // Save cout flags
  ios_base::fmtflags flags(cout.flags());

  cout.precision(PRECISION);
  cout << fixed << d1 * 2 + d2 * 2 * PI << endl;

  // Reset cout flags
  cout.flags(flags);
}
