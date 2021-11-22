#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void printStackLog(const vector<int> &nums) {
  int count = 1;
  stack<int> intStack;
  vector<char> log;

  // Reserve log size
  log.reserve(nums.size() * 2);

  for (const int &num : nums) {
    // Push
    while (num >= count) {
      intStack.push(count++);
      log.push_back('+');
    }

    // Pop
    if (intStack.top() != num) {
      cout << "NO" << endl;
      return;
    }

    intStack.pop();
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
