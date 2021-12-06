#include <iostream>

using namespace std;

int main() {
  int sum;
  cin >> sum;

  char ch;
  int n;
  bool isMinus = false;
  while (cin >> ch >> n) {
    if (ch == '-')
      isMinus = true;

    if (isMinus)
      sum -= n;
    else
      sum += n;
  }

  cout << sum << endl;
}
