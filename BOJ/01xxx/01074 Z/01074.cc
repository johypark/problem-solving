#include <cmath>
#include <iostream>

using namespace std;

int getIndex(int n, int r, int c) {
  if (n == 0)
    return 0;

  int cell = pow(2, n - 1);
  int index = 0;
  if (r >= cell)
    index += 2;
  if (c >= cell)
    index += 1;

  return cell * cell * index + getIndex(n - 1, r % cell, c % cell);
}

int main() {
  int n, r, c;
  cin >> n >> r >> c;

  cout << getIndex(n, r, c) << endl;
}
