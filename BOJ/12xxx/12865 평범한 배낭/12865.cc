#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getMaxKnapsackValue(int weight, const vector<pair<int, int>> &objects) {
  vector<int> prev(weight + 1);
  vector<int> curr(weight + 1);
  for (const auto &[w, v] : objects) {
    for (int j = 1; j <= weight; j++) {
      if (j < w)
        curr[j] = prev[j];
      else
        curr[j] = max(prev[j], prev[j - w] + v);
    }

    prev = curr;
  }

  return curr.back();
}

int main() {
  int n, k;
  cin >> n >> k;

  vector<pair<int, int>> objects(n);
  for (auto &[w, v] : objects)
    cin >> w >> v;

  cout << getMaxKnapsackValue(k, objects) << endl;
}
