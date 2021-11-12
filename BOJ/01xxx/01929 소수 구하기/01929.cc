#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

vector<bool> getPrimeTable(int max) {
  int sqrtN = sqrt(max);

  // Initialize
  vector<bool> primeTable(max + 1);
  for (int i = 2; i <= max; i++)
    primeTable[i] = true;

  // Eratos
  for (int i = 2; i <= sqrtN; i++)
    if (primeTable[i]) {
      for (int j = i * i; j <= max; j += i)
        primeTable[j] = false;
    }

  return primeTable;
}

int main() {
  int n, m;
  cin >> m >> n;

  // Print prime numbers
  vector<bool> primeTable = getPrimeTable(n);
  for (int i = m; i <= n; i++)
    if (primeTable[i])
      cout << i << '\n';
}
