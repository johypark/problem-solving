#include <algorithm>
#include <iostream>
#include <vector>

enum { LENGTH = 9 };

using namespace std;

int getMaxNumIndex(vector<int> nums) {
  return max_element(nums.begin(), nums.end()) - nums.begin();
}

int main() {
  vector<int> nums(LENGTH);
  for (int &num : nums)
    cin >> num;

  int maxIndex = getMaxNumIndex(nums);
  cout << nums[maxIndex] << '\n' << maxIndex + 1 << endl;
}
