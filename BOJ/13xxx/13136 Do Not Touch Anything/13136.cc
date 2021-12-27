#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int r, c, n;
  cin >> r >> c >> n;

  long long cctvCount =
      ceil(static_cast<double>(r) / n) * ceil(static_cast<double>(c) / n);
  cout << cctvCount << endl;
}
