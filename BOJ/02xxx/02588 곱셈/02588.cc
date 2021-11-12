#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  int multiplicand = b;
  while (multiplicand) {
    cout << a * (multiplicand % 10) << '\n';

    multiplicand /= 10;
  }

  cout << a * b << endl;
}
