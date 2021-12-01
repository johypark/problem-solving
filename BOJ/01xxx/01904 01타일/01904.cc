#include <iostream>

using namespace std;

int getCountTileCases(int n) {
  const int DIVISOR = 15746;
  int prev = 1;
  int curr = 1;
  int next;
  for (int i = 2; i <= n; i++) {
    next = (prev + curr) % DIVISOR;
    prev = curr;
    curr = next;
  }

  return curr;
}

int main() {
  int n;
  cin >> n;

  cout << getCountTileCases(n) << endl;
}
