#include <cmath>
#include <iostream>
#include <vector>

enum { MAX_NUMBER = 123456 };

using namespace std;

vector<bool> getPrimeTable(int max) {
  int sqrtN = sqrt(max);

  // Initialize
  vector<bool> primeTable(max + 1, true);
  for (int i = 0; i < 2; i++)
    primeTable[i] = false;

  // Eratos
  for (int i = 2; i <= sqrtN; i++)
    if (primeTable[i]) {
      for (int j = i * i; j <= max; j += i)
        primeTable[j] = false;
    }

  return primeTable;
}

int main() {
  int n;
  vector<bool> primeTable = getPrimeTable(MAX_NUMBER * 2);
  while (true) {
    cin >> n;

    if (n == 0)
      break;

    int count = 0;
    for (int i = n + 1; i <= n * 2; i++)
      count += primeTable[i];

    cout << count << '\n';
  }
}
