#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m >> k;

  cout << n - abs(m - k) << endl;
}
