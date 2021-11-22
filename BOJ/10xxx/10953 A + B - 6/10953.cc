#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  int a, b;
  char ch;
  for (int i = 0; i < t; i++) {
    cin >> a >> ch >> b;

    cout << a + b << '\n';
  }
}
