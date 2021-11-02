#include <array>
#include <iostream>

enum { LENGTH = 10, DIVISOR = 42 };

using namespace std;

int main() {
  int n;
  array<int, DIVISOR> isNumbersExist = {false};
  int count = 0;
  for (int i = 0; i < LENGTH; i++) {
    cin >> n;

    if (!isNumbersExist[n % DIVISOR]) {
      isNumbersExist[n % DIVISOR] = true;
      count++;
    }
  }

  cout << count << endl;
}
