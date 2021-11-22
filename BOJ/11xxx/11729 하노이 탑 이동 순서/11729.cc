#include <cmath>
#include <iostream>

using namespace std;

void towerOfHanoi(int n, int from = 1, int aux = 2, int to = 3) {
  if (n == 1)
    cout << from << ' ' << to << '\n';
  else {
    towerOfHanoi(n - 1, from, to, aux);
    cout << from << ' ' << to << '\n';
    towerOfHanoi(n - 1, aux, from, to);
  }
}

int main() {
  int n;
  cin >> n;

  int count = pow(2, n) - 1;
  cout << count << '\n';
  towerOfHanoi(n);
}
