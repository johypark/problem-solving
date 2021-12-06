#include <iostream>
#include <vector>

enum { MAX_NUM = 29 };

using namespace std;

vector<vector<int>> getCombinationTable(int n) {
  vector<vector<int>> combinationTable(n + 1, vector<int>(n + 1));
  for (size_t i = 0; i < combinationTable.size(); i++) {
    combinationTable[i][0] = 1;
    for (size_t j = 1; j <= i; j++) {
      combinationTable[i][j] =
          combinationTable[i - 1][j - 1] + combinationTable[i - 1][j];
    }
  }

  return combinationTable;
}

int main() {
  int t;
  cin >> t;

  int n, m;
  vector<vector<int>> combinationTable = getCombinationTable(MAX_NUM);
  for (int i = 0; i < t; i++) {
    cin >> n >> m;

    cout << combinationTable[m][n] << '\n';
  }
}
