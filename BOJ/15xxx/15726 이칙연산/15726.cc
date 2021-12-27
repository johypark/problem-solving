#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << static_cast<long long>(a) * max(b, c) / min(b, c) << endl;
}
