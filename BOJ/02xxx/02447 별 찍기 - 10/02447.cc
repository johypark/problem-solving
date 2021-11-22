#include <iostream>

using namespace std;

void printStar(int i, int j, int n) {
  n /= 3;

  if (i / n % 3 == 1 && j / n % 3 == 1) {
    cout << ' ';
  } else if (n < 3) {
    cout << '*';
  } else {
    printStar(i, j, n);
  }
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printStar(i, j, n);
    }
    cout << '\n';
  }
}
