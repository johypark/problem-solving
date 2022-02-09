#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int ca, ba, pa, cr, br, pr;
  cin >> ca >> ba >> pa >> cr >> br >> pr;

  cout << max(cr - ca, 0) + max(br - ba, 0) + max(pr - pa, 0) << endl;
}
