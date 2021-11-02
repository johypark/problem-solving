#include <iostream>
#include <string>

enum { MAX_LENGTH = 100 };

using namespace std;

int getAlphabetFirstAppearance(const string &str, char alphabet) {
  for (size_t i = 0; i < str.size(); i++)
    if (str[i] == alphabet)
      return i;

  return -1;
}

int main() {
  string s;
  cin >> s;

  for (int i = 0; i < 26; i++)
    cout << getAlphabetFirstAppearance(s, 'a' + i) << ' ';

  cout << endl;
}
