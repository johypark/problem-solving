#include <cmath>
#include <iostream>
#include <vector>

enum { MAX_NUMBER = 1000 };

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
  int n;
  cin >> n;

  vector<bool> isPrime = eratos(MAX_NUMBER);
  int number;
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> number;
    if (isPrime[number])
      count++;
  }

  cout << count << endl;
}
