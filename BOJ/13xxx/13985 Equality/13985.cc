#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  char ch;
  cin >> a >> ch >> b >> ch >> c;

  cout << (a + b == c ? "YES" : "NO") << endl;
}
