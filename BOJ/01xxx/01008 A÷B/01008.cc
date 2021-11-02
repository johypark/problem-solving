#include <iostream>

enum { PRECISION = 9 };

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  // Save cout flags
  ios_base::fmtflags flags(cout.flags());

  cout.precision(PRECISION);
  cout << fixed << static_cast<double>(a) / b << endl;

  // Reset cout flags
  cout.flags(flags);
}
