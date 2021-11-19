#include <iostream>

enum { DIAL_DELAY = 1 };

using namespace std;

int getDialNumber(char ch) {
  if (ch <= 'C')
    return 2;
  if (ch <= 'F')
    return 3;
  if (ch <= 'I')
    return 4;
  if (ch <= 'L')
    return 5;
  if (ch <= 'O')
    return 6;
  if (ch <= 'S')
    return 7;
  if (ch <= 'V')
    return 8;
  if (ch <= 'Z')
    return 9;

  return 0;
}

int main() {
  string s;
  cin >> s;

  int time = 0;
  for (const char &ch : s)
    time += getDialNumber(ch) + DIAL_DELAY;

  cout << time << endl;
}
