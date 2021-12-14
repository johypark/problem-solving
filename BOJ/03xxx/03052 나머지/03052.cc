#include <array>
#include <iostream>

enum { LENGTH = 10, MODULAR = 42 };

using namespace std;

int main() {
  int n;
  array<int, MODULAR> isNumExist = {false};
  int count = 0;
  for (int i = 0; i < LENGTH; i++) {
    cin >> n;

    if (!isNumExist[n % MODULAR]) {
      isNumExist[n % MODULAR] = true;
      count++;
    }
  }

  cout << count << endl;
}
