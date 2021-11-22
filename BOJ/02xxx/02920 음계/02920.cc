#include <iostream>
#include <vector>

enum { LENGTH = 8 };

using namespace std;

void printScaleOrder(const vector<int> &nums) {
  bool isAscending = true;
  bool isDescending = true;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] != i + 1)
      isAscending = false;
    if (nums[i] != nums.size() - i)
      isDescending = false;
  }

  if (isAscending)
    cout << "ascending";
  else if (isDescending)
    cout << "descending";
  else
    cout << "mixed";

  cout << endl;
}

int main() {
  vector<int> nums(LENGTH);
  for (int &num : nums)
    cin >> num;

  printScaleOrder(nums);
}
