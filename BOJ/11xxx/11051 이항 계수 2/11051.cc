#include <iostream>
#include <vector>

using namespace std;

int combination(int n, int k) {
  const int DIVISOR = 10007;

  vector<int> prev(n + 1);
  vector<int> curr(n + 1);
  curr[0] = 1;
  for (size_t i = 1; i < curr.size(); i++) {
    prev = curr;
    for (size_t j = 1; j <= i; j++) {
      curr[j] = (prev[j - 1] + prev[j]) % DIVISOR;
    }
  }

  return curr[k];
}

int main() {
  int n, k;
  cin >> n >> k;

  cout << combination(n, k) << endl;
}
