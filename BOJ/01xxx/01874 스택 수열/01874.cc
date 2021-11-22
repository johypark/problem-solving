#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void printStackLog(const vector<int> &nums) {
  int count = 1;
  stack<int> stack;
  vector<char> log;

  // Set log size
  log.reserve(nums.size() * 2);

  for (const int &num : nums) {
    // Push
    while (num >= count) {
      stack.push(count++);
      log.push_back('+');
    }

    // Pop
    if (stack.top() != num) {
      cout << "NO" << endl;
      return;
    }

    stack.pop();
    log.push_back('-');
  }

  for (const char &sign : log)
    cout << sign << '\n';
}

int main() {
  int n;
  cin >> n;

  vector<int> nums(n);
  for (int &num : nums)
    cin >> num;

  printStackLog(nums);
}
