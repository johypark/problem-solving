#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  vector<int> nums(n);
  for (int &num : nums)
    cin >> num;

  vector<int> totals = nums;
  for (size_t i = 1; i < totals.size(); i++)
    totals[i] += totals[i - 1];

  int i, j;
  for (int k = 0; k < m; k++) {
    cin >> i >> j;

    cout << totals[j - 1] - totals[i - 2] << '\n';
  }
}
