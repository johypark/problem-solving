#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  int k;
  cin >> k;

  int num;
  vector<int> nums;
  for (int i = 0; i < k; i++) {
    cin >> num;

    if (num)
      nums.push_back(num);
    else
      nums.pop_back();
  }

  cout << reduce(nums.begin(), nums.end()) << endl;
}
