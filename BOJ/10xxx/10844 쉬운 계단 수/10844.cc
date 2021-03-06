#include <array>
#include <iostream>
#include <vector>

using namespace std;

int getStairNumCount(int n) {
  const int MODULAR = 1000000000;

  array<int, 10> prev, curr;
  curr[0] = 0;
  for (int i = 1; i <= 9; i++)
    curr[i] = 1;

  int left, right;
  for (int i = 2; i <= n; i++) {
    prev = curr;
    for (int j = 0; j <= 9; j++) {
      left = j - 1 >= 0 ? prev[j - 1] : 0;
      right = j + 1 <= 9 ? prev[j + 1] : 0;
      curr[j] = (left + right) % MODULAR;
    }
  }

  int count = 0;
  for (const int &num : curr) {
    count += num;
    count %= MODULAR;
  }

  return count;
}

int main() {
  int n;
  cin >> n;

  cout << getStairNumCount(n) << endl;
}
