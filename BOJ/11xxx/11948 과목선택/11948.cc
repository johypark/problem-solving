#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int a, b, c, d, e, f;
  cin >> a >> b >> c >> d >> e >> f;

  cout << a + b + c + d - min({a, b, c, d}) + max(e, f) << endl;
}
