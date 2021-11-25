#include <cmath>
#include <iostream>
#include <vector>

enum { MAX_NUM = 10000 };

using namespace std;

vector<bool> getPrimeTable(int maxNum) {
  int sqrtN = sqrt(maxNum);

  // Initialize
  vector<bool> primeTable(maxNum + 1, true);
  for (int i = 0; i < 2; i++)
    primeTable[i] = false;

  // Eratos
  for (int i = 2; i <= sqrtN; i++)
    if (primeTable[i]) {
      for (int j = i * i; j <= maxNum; j += i)
        primeTable[j] = false;
    }

  return primeTable;
}

int main() {
  int t;
  cin >> t;

  int n;
  vector<bool> primeTable = getPrimeTable(MAX_NUM);
  for (int i = 0; i < t; i++) {
    cin >> n;

    for (int j = n / 2; j > 1; j--) {
      if (primeTable[j] && primeTable[n - j]) {
        cout << j << ' ' << n - j << '\n';
        break;
      }
    }
  }
}
