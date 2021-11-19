#include <iostream>

using namespace std;

bool isHansu(int n) {
  if (n < 100)
    return true;

  int a = n % 10;
  n /= 10;
  int d = a - n % 10;
  while (n >= 10) {
    a = n % 10;
    n /= 10;
    if (a - n % 10 != d)
      return false;
  }

  return true;
}

int main() {
  int n;
  cin >> n;

  int count = 0;
  for (int i = 1; i <= n; i++) {
    count += isHansu(i);
  }

  cout << count << endl;
}
