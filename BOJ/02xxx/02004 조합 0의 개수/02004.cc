#include <algorithm>
#include <iostream>

using namespace std;

int getFactorialPrimeCount(int n, int prime) {
  int count = 0;
  for (long long i = prime; i <= n; i *= prime)
    count += n / i;

  return count;
}

int getCombinationPrimeCount(int n, int k, int prime) {
  return getFactorialPrimeCount(n, prime) -
         getFactorialPrimeCount(n - k, prime) -
         getFactorialPrimeCount(k, prime);
}

int main() {
  int n, m;
  cin >> n >> m;

  cout << min(getCombinationPrimeCount(n, m, 2),
              getCombinationPrimeCount(n, m, 5))
       << endl;
}
