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
  int a, b;
  cin >> a >> b;

  int gcd = getGCD(a, b);
  int lcm = a * b / gcd;
  cout << gcd << '\n' << lcm << endl;
}
