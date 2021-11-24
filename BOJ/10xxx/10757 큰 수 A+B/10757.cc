#include <iostream>

using namespace std;

string sumStringNum(const string &a, const string &b) {
  string sum;
  int maxSize = max(a.size(), b.size()) + 1;
  sum.reserve(maxSize);

  int iA = a.size();
  int iB = b.size();
  int c = 0;
  while (iA || iB || c) {
    c += iA ? a[--iA] - '0' : 0;
    c += iB ? b[--iB] - '0' : 0;

    sum.insert(0, 1, static_cast<char>(c % 10 + '0'));

    c /= 10;
  }

  return sum;
}

int main() {
  string a, b;
  cin >> a >> b;

  cout << sumStringNum(a, b) << endl;
}
