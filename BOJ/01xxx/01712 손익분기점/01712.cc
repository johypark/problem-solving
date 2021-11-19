#include <iostream>

using namespace std;

int getBreakEvenPoint(int a, int b, int c) {
  if (b - c >= 0)
    return -1;

  return -a / (b - c) + 1;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << getBreakEvenPoint(a, b, c) << endl;
}
