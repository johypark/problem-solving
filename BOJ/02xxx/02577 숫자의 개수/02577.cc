#include <iostream>
#include <vector>

enum { BASE = 10 };

using namespace std;

vector<int> getNumbersUsed(int number) {
  vector<int> numbersUsed(BASE);

  while (number > 0) {
    numbersUsed[number % BASE]++;
    number /= BASE;
  }

  return numbersUsed;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> numbersUsed = getNumbersUsed(a * b * c);
  for (const int &number : numbersUsed)
    cout << number << '\n';
}
