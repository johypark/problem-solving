#include <iostream>

using namespace std;

int main() {
  string hangul;
  cin >> hangul;

  int utf8 = ((hangul[0] & 0x0F) << 12) + ((hangul[1] & 0x3F) << 6) +
             (hangul[2] & 0x3F);

  cout << utf8 - L'가' + 1 << endl;
}
