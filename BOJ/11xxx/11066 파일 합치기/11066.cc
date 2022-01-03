#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int getMinCost(const vector<int> &files) {
  vector<vector<int>> costs(files.size() + 1);
  for (size_t i = 1; i < costs.size(); i++)
    costs[i] = vector<int>(costs.size() - i);

  vector<int> totals(files.size() + 1);
  for (size_t i = 1; i < totals.size(); i++)
    totals[i] = totals[i - 1] + files[i - 1];

  for (size_t i = 2; i < costs.size(); i++) {
    for (size_t j = 0; j < costs[i].size(); j++) {
      int minCost = INT_MAX;
      for (size_t k = 1; k < i; k++)
        minCost = min(minCost, costs[k][j] + costs[i - k][j + k]);

      costs[i][j] = minCost + totals[i + j] - totals[j];
    }
  }

  return costs.back().back();
}

int main() {
  int t;
  cin >> t;

  int k;
  for (int i = 0; i < t; i++) {
    cin >> k;

    vector<int> files(k);
    for (int &file : files)
      cin >> file;

    cout << getMinCost(files) << '\n';
  }
}
