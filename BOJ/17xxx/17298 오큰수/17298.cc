#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> getNGE(const vector<int> &nums) {
  stack<int> indexStack;
  vector<int> nge(nums.size(), -1);
  for (int i = 0; i < nums.size(); i++) {
    while (!indexStack.empty() && nums[indexStack.top()] < nums[i]) {
      nge[indexStack.top()] = nums[i];
      indexStack.pop();
    }

    indexStack.push(i);
  }

  return nge;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> nums(n);
  for (int &num : nums)
    cin >> num;

  vector<int> nge = getNGE(nums);
  for (const int &num : nge)
    cout << num << ' ';

  cout << endl;
}
