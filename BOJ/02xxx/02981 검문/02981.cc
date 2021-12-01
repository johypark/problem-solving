#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <set>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> nums(n);
  for (int &num : nums)
    cin >> num;

  sort(nums.begin(), nums.end());
  int m = nums[1] - nums[0];
  for (size_t i = 2; i < nums.size(); i++)
    m = gcd(m, nums[i] - nums[i - 1]);

  set<int> factors;
  int sqrtM = sqrt(m);
  for (int i = 2; i <= sqrtM; i++) {
    if (m % i == 0) {
      factors.insert(i);
      factors.insert(m / i);
    }
  }

  for (const int &factor : factors)
    cout << factor << ' ';
  cout << m << endl;
}
