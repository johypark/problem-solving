#include <cmath>
#include <iostream>
#include <vector>

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
  int n, m;
  cin >> m >> n;

  vector<bool> primeTable = getPrimeTable(n);
  int sum = 0;
  int min = -1;
  for (int i = m; i <= n; i++) {
    if (primeTable[i]) {
      if (!sum)
        min = i;
      sum += i;
    }
  }

  if (sum)
    cout << sum << '\n';
  cout << min << endl;
}
