#include <cmath>
#include <iostream>

enum { PRECISION = 6 };

using namespace std;

int main() {
  long long area;
  cin >> area;

  // Save cout flags
  ios_base::fmtflags flags(cout.flags());

  cout.precision(PRECISION);
  cout << fixed << sqrt(area) * 4 << endl;

  // Reset cout flags
  cout.flags(flags);
}
