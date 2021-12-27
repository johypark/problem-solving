#include <iostream>

using namespace std;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;

  int sec;
  if (a < 0)
    sec = -a * c + d + b * e;
  else
    sec = (b - a) * e;

  cout << sec << endl;
}
