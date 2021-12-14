#include <iostream>

using namespace std;

int pow(long long a, int b, int modular) {
  if (b == 1)
    return a % modular;
  if (b % 2)
    return pow(a * a % modular, b / 2, modular) * a % modular;

  return pow(a * a % modular, b / 2, modular);
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  cout << pow(a, b, c) << endl;
}
