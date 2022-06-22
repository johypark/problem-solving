#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int l, r;
  cin >> l >> r;

  if (l == 0 && r == 0)
    cout << "Not a moose" << endl;
  else if (l == r)
    cout << "Even " << l + r << endl;
  else
    cout << "Odd " << max(l, r) * 2 << endl;
}
