#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getMinOperationCount(int n) {
  vector<int> minCounts(n + 1);
  minCounts[1] = 0;
  for (size_t i = 2; i < minCounts.size(); i++) {
    minCounts[i] = minCounts[i - 1];
    if (i % 3 == 0)
      minCounts[i] = min(minCounts[i], minCounts[i / 3]);
    if (i % 2 == 0)
      minCounts[i] = min(minCounts[i], minCounts[i / 2]);

    minCounts[i]++;
  }

  return minCounts[n];
}

int main() {
  int n;
  cin >> n;

  cout << getMinOperationCount(n) << endl;
}
