#include <iostream>
#include <vector>

enum { MAX_NUMBER = 10000 };

using namespace std;

int getDigitsum(int n) {
  int digitsum = n;
  while (n) {
    digitsum += n % 10;
    n /= 10;
  }

  return digitsum;
}

vector<bool> getSelfNumberTable(int max) {
  // Initialize
  vector<bool> selfNumberTable(max + 1);
  for (int i = 1; i <= max; i++)
    selfNumberTable[i] = true;

  int digitsum;
  for (int i = 1; i < max; i++) {
    digitsum = getDigitsum(i);
    if (digitsum <= max)
      selfNumberTable[digitsum] = false;
  }

  return selfNumberTable;
}

int main() {
  vector<bool> selfNumberTable = getSelfNumberTable(MAX_NUMBER);
  for (size_t i = 0; i < selfNumberTable.size(); i++) {
    if (selfNumberTable[i])
      cout << i << '\n';
  }
}
