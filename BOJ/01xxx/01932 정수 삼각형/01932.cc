#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> row(n), maxRow(n);
  int left, right;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cin >> row[j];

      left = j > 0 ? maxRow[j - 1] : 0;
      right = j < i ? maxRow[j] : 0;
      row[j] += max(left, right);
    }
    maxRow = row;
  }

  cout << *max_element(maxRow.begin(), maxRow.end()) << endl;
}
