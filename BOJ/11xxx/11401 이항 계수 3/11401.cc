#include <iostream>

enum { MODULAR = 1000000007 };

using namespace std;

int factorial(int n) {
  long long result = 1;
  for (int i = 2; i <= n; i++)
    result = result * i % MODULAR;

  return result;
}

int permutation(int n, int k) {
  long long result = 1;
  for (int i = 0; i < k; i++)
    result = result * (n - i) % MODULAR;

  return result;
}

int pow(long long a, int b) {
  if (b == 1) {
    return a % MODULAR;
  } else {
    if (b % 2)
      return pow(a * a % MODULAR, b / 2) * a % MODULAR;
    else
      return pow(a * a % MODULAR, b / 2) % MODULAR;
  }
}

int combination(int n, int k) {
  return static_cast<long long>(permutation(n, k)) *
         pow(factorial(k), MODULAR - 2) % MODULAR;
}

int main() {
  int n, k;
  cin >> n >> k;

  cout << combination(n, k) << endl;
}
