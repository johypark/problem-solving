#include <algorithm>
#include <iostream>

using namespace std;

string add(const string &a, const string &b) {
  string sum;
  int maxSize = max(a.size(), b.size()) + 1;
  sum.reserve(maxSize);

  int iA = a.size();
  int iB = b.size();
  int c = 0;
  while (iA || iB || c) {
    c += iA ? a[--iA] - '0' : 0;
    c += iB ? b[--iB] - '0' : 0;

    sum.insert(sum.begin(), c % 10 + '0');

    c /= 10;
  }

  return sum;
}

string sub(const string &a, const string &b) {
  // If |a| < |b|
  if (a.size() < b.size() || (a.size() == b.size() && a.compare(b) < 0)) {
    string sum = sub(b, a);
    sum.insert(sum.begin(), '-');
    return sum;
  }

  string sum;
  int maxSize = max(a.size(), b.size()) + 1;
  sum.reserve(maxSize);

  int iA = a.size();
  int iB = b.size();
  int c = 0;
  while (iA) {
    c += iA ? a[--iA] - '0' : 0;
    c -= iB ? b[--iB] - '0' : 0;

    if (c >= 0) {
      sum.insert(sum.begin(), c + '0');
      c = 0;
    } else {
      sum.insert(sum.begin(), c + '0' + 10);
      c = -1;
    }
  }

  size_t index = 0;
  while (sum[index] == '0' && index < sum.size() - 1)
    index++;

  return sum.substr(index);
}

string sum(const string &a, const string &b) {
  bool isPositiveA = a.front() != '-';
  bool isPositiveB = b.front() != '-';
  if (isPositiveA && isPositiveB)
    return add(a, b);
  else if (!isPositiveA && !isPositiveB)
    return "-" + add(a.substr(1), b.substr(1));
  else if (isPositiveA)
    return sub(a, b.substr(1));
  else
    return sub(b, a.substr(1));
}

int main() {
  string a, b;
  cin >> a >> b;

  cout << sum(a, b) << endl;
}
