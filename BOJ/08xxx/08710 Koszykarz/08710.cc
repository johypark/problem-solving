#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double k, w, m;
  cin >> k >> w >> m;

  int hit = ceil((w - k) / m);
  cout << hit << endl;
}
