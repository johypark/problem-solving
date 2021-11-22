#include <iostream>

using namespace std;

int getApocalypseNum(int n) {
  int count = 0;
  int num = 0;
  int times, dividend;
  while (count < n) {
    times = 0;
    dividend = ++num;

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

  return num;
}

int main() {
  int n;
  cin >> n;

  cout << getApocalypseNum(n) << endl;
}
