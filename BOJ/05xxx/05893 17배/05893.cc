#include <bitset>
#include <iostream>

enum { MAX_LENGTH = 1005 };

using namespace std;

bitset<MAX_LENGTH> operator+(const bitset<MAX_LENGTH> &a,
                             const bitset<MAX_LENGTH> &b) {
  bitset<MAX_LENGTH> result = a;
  bool c = 0;
  for (int i = 0; i < MAX_LENGTH; i++) {
    result[i] = a[i] ^ b[i] ^ c;
    c = (a[i] && b[i]) || (a[i] && c) || (b[i] && c);
  }

  return result;
}

ostream &operator<<(ostream &os, const bitset<MAX_LENGTH> &n) {
  int index = MAX_LENGTH;
  while (n[--index] == 0) {
  }

  while (index >= 0) {
    os << n[index--];
  }

  return os;
}

int main() {
  bitset<MAX_LENGTH> n;
  cin >> n;

  cout << (n << 4) + n << endl;
}
