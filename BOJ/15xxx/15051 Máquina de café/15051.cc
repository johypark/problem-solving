#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;

  cout << min({a2 + a3 * 2, a1 + a3, a1 * 2 + a2}) * 2 << endl;
}
