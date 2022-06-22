#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double a1, p1, r1, p2;
  cin >> a1 >> p1 >> r1 >> p2;

  if (a1 / p1 > r1 * r1 * M_PI / p2)
    cout << "Slice of pizza" << endl;
  else
    cout << "Whole pizza" << endl;
}
