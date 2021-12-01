#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> rings(n);
  for (int &ring : rings)
    cin >> ring;

  int divisor;
  for (size_t i = 1; i < rings.size(); i++) {
    divisor = gcd(rings[0], rings[i]);
    cout << rings[0] / divisor << '/' << rings[i] / divisor << '\n';
  }
}
