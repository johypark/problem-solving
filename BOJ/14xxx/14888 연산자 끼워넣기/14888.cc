#include <algorithm>
#include <array>
#include <climits>
#include <iostream>
#include <vector>

using namespace std;

// DFS
void getMinMax(const vector<int> &nums, array<int, 4> &operatorNums,
               int &minNum, int &maxNum, int num = 0, size_t index = 0) {
  if (index == 0) {
    getMinMax(nums, operatorNums, minNum, maxNum, nums[0], index + 1);
  } else if (index == nums.size()) {
    minNum = min(minNum, num);
    maxNum = max(maxNum, num);
  } else {
    for (int i = 0; i < 4; i++) {
      if (operatorNums[i]) {
        operatorNums[i]--;

        switch (i) {
        case 0:
          getMinMax(nums, operatorNums, minNum, maxNum, num + nums[index],
                    index + 1);
          break;
        case 1:
          getMinMax(nums, operatorNums, minNum, maxNum, num - nums[index],
                    index + 1);
          break;
        case 2:
          getMinMax(nums, operatorNums, minNum, maxNum, num * nums[index],
                    index + 1);
          break;
        case 3:
          getMinMax(nums, operatorNums, minNum, maxNum, num / nums[index],
                    index + 1);
          break;
        }

        operatorNums[i]++;
      }
    }
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> nums(n);
  for (int &num : nums)
    cin >> num;

  array<int, 4> operatorNums;
  for (int &operatorNum : operatorNums)
    cin >> operatorNum;

  int min = INT_MAX;
  int max = INT_MIN;
  getMinMax(nums, operatorNums, min, max);

  cout << max << '\n' << min << endl;
}
