#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> lengths(n - 1);
  for (int &length : lengths)
    cin >> length;

  vector<int> costs(n);
  for (int &cost : costs)
    cin >> cost;

  int cost = costs[0];
  long long sum = 0;
  for (size_t i = 0; i < lengths.size(); i++) {
    cost = min(cost, costs[i]);
    sum += static_cast<long long>(lengths[i]) * cost;
  }

  cout << sum << endl;
}
