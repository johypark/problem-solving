#include <iostream>

using namespace std;

int main() {
  int c4, a3, a4;
  cin >> c4 >> a3 >> a4;

  double gram = 0;
  gram += c4 * 0.229 * 0.324 * 2;
  gram += a3 * 0.297 * 0.420 * 2;
  gram += a4 * 0.210 * 0.297;

  cout << gram << endl;
}
