#include <iostream>

using namespace std;

int main() {
  int shot;
  int apples = 0;
  for (int i = 3; i > 0; i--) {
    cin >> shot;
    apples += shot * i;
  }

  int bananas = 0;
  for (int i = 3; i > 0; i--) {
    cin >> shot;
    bananas += shot * i;
  }

  if (apples > bananas)
    cout << 'A' << endl;
  else if (apples < bananas)
    cout << 'B' << endl;
  else
    cout << 'T' << endl;
}
