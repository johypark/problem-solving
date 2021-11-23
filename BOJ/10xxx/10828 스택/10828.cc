#include <iostream>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  stack<int> intStack;
  string command;
  int num;
  for (int i = 0; i < n; i++) {
    cin >> command;

    if (command == "push") {
      cin >> num;
      intStack.push(num);
    } else if (command == "pop") {
      if (intStack.empty()) {
        cout << -1 << '\n';
      } else {
        cout << intStack.top() << '\n';
        intStack.pop();
      }
    } else if (command == "size") {
      cout << intStack.size() << '\n';
    } else if (command == "empty") {
      cout << intStack.empty() << '\n';
    } else if (command == "top") {
      if (intStack.empty()) {
        cout << -1 << '\n';
      } else {
        cout << intStack.top() << '\n';
      }
    }
  }
}
