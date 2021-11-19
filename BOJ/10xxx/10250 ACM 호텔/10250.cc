#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  int h, w, n;
  for (int i = 0; i < t; i++) {
    cin >> h >> w >> n;

    int floor = (n - 1) % h + 1;
    int room = ceil(static_cast<double>(n) / h);

    cout << floor * 100 + room << '\n';
  }
}
