#include <array>
#include <iostream>
#include <vector>

using namespace std;

int getStairNumCount(int n) {
  const int DIVISOR = 1000000000;

  array<int, 10> prev, curr;
  prev[0] = 0;
  for (int i = 1; i <= 9; i++)
    prev[i] = 1;

  int left, right;
  for (int i = 2; i <= n; i++) {
    for (int j = 0; j <= 9; j++) {
      left = j - 1 >= 0 ? prev[j - 1] : 0;
      right = j + 1 <= 9 ? prev[j + 1] : 0;
      curr[j] = (left + right) % DIVISOR;
    }
    prev = curr;
  }

  int count = 0;
  for (const int &num : prev) {
    count += num;
    count %= DIVISOR;
  }

  return count;
}

int main() {
  int n;
  cin >> n;

  cout << getStairNumCount(n) << endl;
}
