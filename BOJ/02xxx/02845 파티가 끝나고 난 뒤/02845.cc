#include <iostream>

enum { NEWSPAPER_NUM = 5 };

using namespace std;

int main() {
  int l, p;
  cin >> l >> p;

  int people, diff;
  int sum = l * p;
  for (int i = 0; i < NEWSPAPER_NUM; i++) {
    cin >> people;

    diff = people - sum;
    cout << diff << ' ';
  }
  cout << endl;
}
