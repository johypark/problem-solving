#include <iostream>

using namespace std;

int getDigitsum(int n) {
  int digitsum = n;
  while (n) {
    digitsum += n % 10;
    n /= 10;
  }

  return digitsum;
}

int getMinGenerator(int n) {
  int generator = 0;
  for (int i = 1; i < n; i++) {
    if (getDigitsum(i) == n) {
      generator = i;
      break;
    }
  }

  return generator;
}

int main() {
  int n;
  cin >> n;

  cout << getMinGenerator(n) << endl;
}
