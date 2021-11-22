#include <iostream>
#include <numeric>

using namespace std;

int main() {
  int t;
  cin >> t;

  int a, b;
  for (int i = 0; i < t; i++) {
    cin >> a >> b;

    cout << lcm(a, b) << '\n';
  }
}
