#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;

  int bIndex = 1;
  if (s[1] == '0')
    bIndex = 2;

  int a = stoi(s.substr(0, bIndex));
  int b = stoi(s.substr(bIndex));
  cout << a + b << endl;
}
