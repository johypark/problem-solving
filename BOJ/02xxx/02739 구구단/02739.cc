#include <iostream>

using namespace std;

void printMultiplicationTable(int n, int to = 9) {
  for (int i = 1; i <= to; i++)
    cout << n << " * " << i << " = " << n * i << '\n';
}

int main() {
  int n;
  cin >> n;

  printMultiplicationTable(n);
}
