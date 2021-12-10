#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

int main() {
  array<int, 3> nums;
  for (int &num : nums)
    cin >> num;

  sort(nums.begin(), nums.end());

  for (const int &num : nums)
    cout << num << ' ';
  cout << endl;
}
