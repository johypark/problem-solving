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

  cout << *min_element(nums.begin(), nums.end()) << ' '
       << *max_element(nums.begin(), nums.end()) << endl;
}
