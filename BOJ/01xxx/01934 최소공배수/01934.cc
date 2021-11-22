#include <iostream>

using namespace std;

int getGCD(int a, int b) {
  int remainder;
  while (b) {
    remainder = a % b;
    a = b;
    b = remainder;
  }

  return a;
}

int main() {
  int t;
  cin >> t;

  int a, b;
  for (int i = 0; i < t; i++) {
    cin >> a >> b;

    int lcm = a * b / getGCD(a, b);
    cout << lcm << '\n';
  }
}
