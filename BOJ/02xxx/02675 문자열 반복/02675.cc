#include <iostream>
#include <string>

using namespace std;

string getRepeatingCharString(const string &str, int n) {
  string repeatingCharString;
  repeatingCharString.reserve(str.size() * n);

  for (const char &ch : str)
    for (int i = 0; i < n; i++)
      repeatingCharString.push_back(ch);

  return repeatingCharString;
}

int main() {
  int t;
  cin >> t;

  int r;
  string s, p;
  for (int i = 0; i < t; i++) {
    cin >> r >> s;

    p = getRepeatingCharString(s, r);
    cout << p << '\n';
  }
}
