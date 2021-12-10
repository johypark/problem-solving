#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getLCSLength(const string &a, const string &b) {
  vector<vector<int>> lcs(a.size() + 1, vector<int>(b.size() + 1));
  for (size_t i = 1; i < lcs.size(); i++)
    for (size_t j = 1; j < lcs.front().size(); j++)
      if (a[i - 1] == b[j - 1])
        lcs[i][j] = lcs[i - 1][j - 1] + 1;
      else
        lcs[i][j] = max(lcs[i][j - 1], lcs[i - 1][j]);

  return lcs.back().back();
}

int main() {
  string a, b;
  cin >> a >> b;

  cout << getLCSLength(a, b) << endl;
}
