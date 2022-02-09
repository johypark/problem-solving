#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  if (n % 2)
    cout << 0 << endl;
  else if (n / 2 % 2)
    cout << 1 << endl;
  else
    cout << 2 << endl;
}
