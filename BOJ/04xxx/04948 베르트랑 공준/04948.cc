#include <cmath>
#include <iostream>
#include <vector>

enum { MAX_NUM = 123456 };

using namespace std;

vector<bool> getPrimeTable(int n) {
  int sqrtN = sqrt(n);

  // Initialize
  vector<bool> primeTable(n + 1, true);
  for (int i = 0; i < 2; i++)
    primeTable[i] = false;

  // Eratos
  for (int i = 2; i <= sqrtN; i++)
    if (primeTable[i]) {
      for (int j = i * i; j <= n; j += i)
        primeTable[j] = false;
    }

  return primeTable;
}

int main() {
  int n, count;
  vector<bool> primeTable = getPrimeTable(MAX_NUM * 2);
  while (true) {
    cin >> n;

    if (n == 0)
      break;

    count = 0;
    for (int i = n + 1; i <= n * 2; i++)
      count += primeTable[i];

    cout << count << '\n';
  }
}
