#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  if (a == b && b == c)
    cout << 2 << endl;
  else if (a * a == b * b + c * c || b * b == a * a + c * c ||
           c * c == a * a + b * b)
    cout << 1 << endl;
  else
    cout << 0 << endl;
}
