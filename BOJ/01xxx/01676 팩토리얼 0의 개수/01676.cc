#include <algorithm>
#include <iostream>

using namespace std;

int getFactorialPrimeCount(int n, int prime) {
  int count = 0;
  for (int i = prime; i <= n; i *= prime)
    count += n / i;

  return count;
}

int main() {
  int n;
  cin >> n;

  cout << min(getFactorialPrimeCount(n, 2), getFactorialPrimeCount(n, 5))
       << endl;
}
