#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  cout << abs(static_cast<long long>(n) - m) << endl;
}
