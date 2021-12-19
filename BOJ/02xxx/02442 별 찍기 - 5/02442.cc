#include <iostream>

using namespace std;

void printStars(int n) {
  for (int i = n; i > 1; i--) {
    for (int j = 0; j < n - i; j++)
      cout << ' ';
    for (int j = 0; j < i * 2 - 1; j++)
      cout << '*';

    cout << '\n';
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n - i; j++)
      cout << ' ';
    for (int j = 0; j < i * 2 - 1; j++)
      cout << '*';

    cout << '\n';
  }
}

int main() {
  int n;
  cin >> n;

  printStars(n);
}
