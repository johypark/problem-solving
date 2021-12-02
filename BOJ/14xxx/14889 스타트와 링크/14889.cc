#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

// DFS
void getMinExpGap(const vector<vector<int>> &exps, vector<int> &start,
                  vector<int> &link, int &minExpGap) {
  if (start.size() == exps.size() / 2) {
    // Push link
    for (size_t i = start.back() + 1; i < exps.size(); i++)
      link.push_back(i);

    // Calculate exps
    int startExp = 0, linkExp = 0;
    for (const int &i : start)
      for (const int &j : start)
        startExp += exps[i][j];
    for (const int &i : link)
      for (const int &j : link)
        linkExp += exps[i][j];

    // Calculate min exp gap
    int gap = abs(startExp - linkExp);
    minExpGap = min(minExpGap, gap);

    // Pop link
    for (size_t i = start.back() + 1; i < exps.size(); i++)
      link.pop_back();
  } else {
    int back = start.empty() ? -1 : start.back();
    for (size_t i = back + 1; i < exps.size(); i++) {
      start.push_back(i);
      for (size_t j = back + 1; j < i; j++)
        link.push_back(j);

      getMinExpGap(exps, start, link, minExpGap);

      start.pop_back();
      for (size_t j = back + 1; j < i; j++)
        link.pop_back();
    }
  }
}

int main() {
  int n;
  cin >> n;

  vector<vector<int>> exps(n, vector<int>(n));
  for (auto &row : exps)
    for (int &exp : row)
      cin >> exp;

  vector<int> start, link;
  start.reserve(n / 2);
  link.reserve(n / 2);
  int minExpGap = INT_MAX;
  getMinExpGap(exps, start, link, minExpGap);

  cout << minExpGap << endl;
}
