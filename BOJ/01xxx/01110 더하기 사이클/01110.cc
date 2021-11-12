#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int i = 0;
  int m = n;
  do {
    i++;
    m = m % 10 * 10 + (m / 10 + m % 10) % 10;
  } while (m != n);

  cout << i << endl;
}
