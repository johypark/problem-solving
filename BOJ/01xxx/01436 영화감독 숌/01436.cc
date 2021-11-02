#include <iostream>

using namespace std;

int getApocalypseNumber(int n) {
  int count = 0;
  int number = 0;
  int times, dividend;
  while (count < n) {
    times = 0;
    dividend = ++number;

    while (dividend > 0) {
      if (dividend % 10 == 6) {
        if (++times == 3) {
          count++;
          break;
        }
      } else {
        times = 0;
      }

      dividend /= 10;
    }
  }

  return number;
}

int main() {
  int n;
  cin >> n;

  cout << getApocalypseNumber(n) << endl;
}
