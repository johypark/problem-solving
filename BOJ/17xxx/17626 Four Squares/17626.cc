#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int getMinSquaresCount(int n) {
  vector<int> minCounts(n + 1);
  for (int i = 1; i <= n; i++) {
    int minCount = INT_MAX;
    for (int j = sqrt(i); j > 0; j--)
      minCount = min(minCount, minCounts[i - j * j]);

    minCounts[i] = minCount + 1;
  }

  return minCounts.back();
}

int main() {
  int n;
  cin >> n;

  cout << getMinSquaresCount(n) << endl;
}
