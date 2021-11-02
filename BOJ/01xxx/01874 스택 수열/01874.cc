#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void printStackLog(const vector<int> &numbers) {
  int count = 1;
  stack<int> stack;
  vector<char> log;

  // Set log size
  log.reserve(numbers.size() * 2);

  for (const int &number : numbers) {
    // Push
    while (number >= count) {
      stack.push(count++);
      log.push_back('+');
    }

    // Pop
    if (stack.top() != number) {
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

  vector<int> numbers(n);
  for (int &number : numbers)
    cin >> number;

  printStackLog(numbers);
}
