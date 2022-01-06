#include <iostream>
#include <vector>

using namespace std;

int getTilingCasesCount(int n) {
  const int MODULAR = 10007;

  int prev = 1;
  int curr = 1;
  int next;
  for (int i = 2; i <= n; i++) {
    next = (prev + curr) % MODULAR;
    prev = curr;
    curr = next;
  }

  return curr;
}

int main() {
  int n;
  cin >> n;

  cout << getTilingCasesCount(n) << endl;
}
