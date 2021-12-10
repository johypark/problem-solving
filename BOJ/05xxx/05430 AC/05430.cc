#include <algorithm>
#include <deque>
#include <iostream>

using namespace std;

void printArray(const deque<int> &arr) {
  cout << '[';
  if (!arr.empty())
    cout << arr.front();
  for (size_t i = 1; i < arr.size(); i++)
    cout << ',' << arr[i];
  cout << ']' << '\n';
}

int main() {
  int t;
  cin >> t;

  string commands;
  int n;
  char ch;
  bool isReverse, isValid;
  for (int i = 0; i < t; i++) {
    cin >> commands;

    cin >> n;
    deque<int> x(n);
    cin >> ch;
    if (x.empty())
      cin >> ch;
    for (int &xi : x)
      cin >> xi >> ch;

    isReverse = false;
    isValid = true;
    for (const char &command : commands) {
      if (command == 'R') {
        isReverse = !isReverse;
      } else if (command == 'D') {
        if (x.empty()) {
          isValid = false;
          break;
        }

        if (isReverse)
          x.pop_back();
        else
          x.pop_front();
      }
    }

    if (isValid) {
      if (isReverse)
        reverse(x.begin(), x.end());

      printArray(x);
    } else {
      cout << "error" << '\n';
    }
  }
}
