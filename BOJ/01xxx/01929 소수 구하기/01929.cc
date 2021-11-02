#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

vector<bool> eratos(int n) {
  int sqrtN = sqrt(n);

  // Initialize
  vector<bool> isPrime(n + 1);
  for (int i = 2; i <= n; i++)
    isPrime[i] = true;

  // Eratos
  for (int i = 2; i <= sqrtN; i++)
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i)
        isPrime[j] = false;
    }

  return isPrime;
}

int main() {
  int n, m;
  cin >> m >> n;

  // Print prime numbers
  vector<bool> isPrime = eratos(n);
  for (int i = m; i <= n; i++)
    if (isPrime[i])
      cout << i << '\n';
}
