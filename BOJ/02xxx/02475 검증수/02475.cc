#include <iostream>
#include <vector>

enum { LENGTH = 5 };

using namespace std;

int getVerificationNum(const vector<int> &nums) {
  int verificationNum;
  int sum = 0;

  for (const int &num : nums)
    sum += num * num;

  verificationNum = sum % 10;
  return verificationNum;
}

int main() {
  vector<int> nums(LENGTH);
  for (int &num : nums)
    cin >> num;

  cout << getVerificationNum(nums) << endl;
}
