#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> nums(n);
  for (int &num : nums)
    cin >> num;

  auto [minIt, maxIt] = minmax_element(nums.begin(), nums.end());
  cout << *minIt << ' ' << *maxIt << endl;
}
