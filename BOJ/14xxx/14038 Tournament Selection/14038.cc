#include <iostream>

using namespace std;

int main() {
  char ch;
  int wins = 0;
  for (int i = 0; i < 6; i++) {
    cin >> ch;
    if (ch == 'W')
      wins++;
  }

  if (wins >= 5)
    cout << 1 << endl;
  else if (wins >= 3)
    cout << 2 << endl;
  else if (wins >= 1)
    cout << 3 << endl;
  else
    cout << -1 << endl;
}
