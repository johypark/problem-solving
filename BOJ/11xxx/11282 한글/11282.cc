#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int utf8 = L'가' + n - 1;
  string hangul;
  hangul.push_back(0xE0 | utf8 >> 12);
  hangul.push_back(0x80 | (utf8 >> 6 & 0x3F));
  hangul.push_back(0x80 | (utf8 & 0x3F));

  cout << hangul << endl;
}
