#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int getSecondSmallestMode(vector<int> nums) {
  int count = 1;
  int mode_count = 1;
  int mode = nums.front();
  bool isSecond = false;
  for (size_t i = 1; i < nums.size(); i++) {
    if (nums[i] == nums[i - 1])
      count++;
    else
      count = 1;

    if (mode_count < count) {
      // New mode
      mode = nums[i];
      mode_count = count;
      isSecond = false;
    } else if (mode_count == count && !isSecond) {
      // Second smallest mode
      mode = nums[i];
      isSecond = true;
    }
  }

  return mode;
}

int main() {
  int n;
  cin >> n;

  vector<int> nums(n);
  for (int &num : nums)
    cin >> num;

  sort(nums.begin(), nums.end());

  int average = round(static_cast<double>(reduce(nums.begin(), nums.end())) /
                      nums.size());
  int median = nums[nums.size() / 2];
  int secondSmallestMode = getSecondSmallestMode(nums);
  int range = nums.back() - nums.front();

  cout << average << '\n'
       << median << '\n'
       << secondSmallestMode << '\n'
       << range << endl;
}
