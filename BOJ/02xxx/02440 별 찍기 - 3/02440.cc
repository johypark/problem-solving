#include <iostream>

using namespace std;

void printStars(int n) {
  for (int i = n; i >= 1; i--) {
    for (int j = 0; j < i; j++)
      cout << '*';

    cout << '\n';
  }
}

int main() {
  int n;
  cin >> n;

  printStars(n);
}
