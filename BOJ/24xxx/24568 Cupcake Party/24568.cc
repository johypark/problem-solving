#include <iostream>

using namespace std;

int main() {
  int r, s;
  cin >> r >> s;

  int cupcakeCount = r * 8 + s * 3;
  cout << cupcakeCount - 28 << endl;
}
