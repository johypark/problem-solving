#include <iostream>
#include <vector>

enum { MAX_NUM = 10000 };

using namespace std;

int getDigitsum(int n) {
  int digitsum = n;
  while (n) {
    digitsum += n % 10;
    n /= 10;
  }

  return digitsum;
}

vector<bool> getSelfNumTable(int maxNum) {
  // Initialize
  vector<bool> selfNumTable(maxNum + 1, true);
  selfNumTable[0] = false;

  int digitsum;
  for (int i = 1; i < maxNum; i++) {
    digitsum = getDigitsum(i);
    if (digitsum <= maxNum)
      selfNumTable[digitsum] = false;
  }

  return selfNumTable;
}

int main() {
  vector<bool> selfNumTable = getSelfNumTable(MAX_NUM);
  for (size_t i = 0; i < selfNumTable.size(); i++) {
    if (selfNumTable[i])
      cout << i << '\n';
  }
}
