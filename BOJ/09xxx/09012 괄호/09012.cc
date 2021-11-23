#include <iostream>
#include <stack>

using namespace std;

bool isVPS(const string &parenthesisString) {
  stack<char> parenthesisStack;
  for (const char &parenthesis : parenthesisString) {
    if (parenthesis == '(')
      parenthesisStack.push(parenthesis);
    else if (parenthesisStack.empty())
      return false;
    else
      parenthesisStack.pop();
  }

  return parenthesisStack.empty();
}

int main() {
  int t;
  cin >> t;

  string parenthesisString;
  for (int i = 0; i < t; i++) {
    cin >> parenthesisString;

    cout << (isVPS(parenthesisString) ? "YES" : "NO") << '\n';
  }
}
