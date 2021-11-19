#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int quotient = n / 5;
  int remainder = n % 5;
  while (quotient >= 0 && remainder % 3) {
    quotient--;
    remainder += 5;
  }

  int count = quotient >= 0 ? quotient + remainder / 3 : -1;
  cout << count << endl;
}
