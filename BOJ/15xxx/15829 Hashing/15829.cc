#include <cmath>
#include <iostream>

using namespace std;

int getHashValue(const string &str) {
  const int R = 31;
  const int M = 1234567891;
  long long hashValue = 0;
  long long multiplicand = 1;
  for (const char &ch : str) {
    hashValue += (ch - 'a' + 1) * multiplicand;
    hashValue %= M;

    multiplicand *= R;
    multiplicand %= M;
  }

  return hashValue;
}

int main() {
  int l;
  cin >> l;

  string str;
  cin >> str;

  cout << getHashValue(str) << endl;
}
