#include <array>
#include <iostream>

enum { LENGTH = 10, DIVISOR = 42 };

using namespace std;

int main() {
  int n;
  array<int, DIVISOR> isNumExist = {false};
  int count = 0;
  for (int i = 0; i < LENGTH; i++) {
    cin >> n;

    if (!isNumExist[n % DIVISOR]) {
      isNumExist[n % DIVISOR] = true;
      count++;
    }
  }

  cout << count << endl;
}
