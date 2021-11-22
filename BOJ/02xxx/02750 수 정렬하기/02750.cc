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

  sort(nums.begin(), nums.end());

  for (const int &num : nums)
    cout << num << '\n';
}
