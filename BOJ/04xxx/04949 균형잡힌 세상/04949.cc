#include <iostream>
#include <stack>

using namespace std;

bool isBalanced(const string &dataset) {
  stack<char> parenthesisStack;
  for (const char &ch : dataset) {
    if (ch == '(' || ch == '[') {
      parenthesisStack.push(ch);
    } else if (ch == ')' || ch == ']') {
      if (parenthesisStack.empty())
        return false;
      else if (ch - parenthesisStack.top() < 1 ||
               ch - parenthesisStack.top() > 2)
        return false;
      else
        parenthesisStack.pop();
    }
  }

  return parenthesisStack.empty();
}

int main() {
  string dataset;
  while (true) {
    getline(cin, dataset);

    if (dataset == ".")
      break;

    cout << (isBalanced(dataset) ? "yes" : "no") << '\n';
  }
}
