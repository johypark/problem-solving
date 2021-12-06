#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getMaxCablesCount(const vector<pair<int, int>> &cables) {
  int maxCount;
  vector<int> counts(cables.size());
  int maxCablesCount = 0;
  for (size_t i = 0; i < counts.size(); i++) {
    maxCount = 0;
    for (size_t j = 0; j < i; j++)
      if (cables[j].second < cables[i].second)
        maxCount = max(maxCount, counts[j]);

    counts[i] = maxCount + 1;
    maxCablesCount = max(maxCablesCount, counts[i]);
  }

  return maxCablesCount;
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> cables(n);
  for (auto &[a, b] : cables)
    cin >> a >> b;

  sort(cables.begin(), cables.end());

  cout << cables.size() - getMaxCablesCount(cables) << endl;
}
