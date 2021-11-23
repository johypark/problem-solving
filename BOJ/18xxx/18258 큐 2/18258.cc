#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  queue<int> intQueue;
  string command;
  int num;
  for (int i = 0; i < n; i++) {
    cin >> command;

    if (command == "push") {
      cin >> num;
      intQueue.push(num);
    } else if (command == "pop") {
      if (intQueue.empty()) {
        cout << -1 << '\n';
      } else {
        cout << intQueue.front() << '\n';
        intQueue.pop();
      }
    } else if (command == "size") {
      cout << intQueue.size() << '\n';
    } else if (command == "empty") {
      cout << intQueue.empty() << '\n';
    } else if (command == "front") {
      if (intQueue.empty()) {
        cout << -1 << '\n';
      } else {
        cout << intQueue.front() << '\n';
      }
    } else if (command == "back") {
      if (intQueue.empty()) {
        cout << -1 << '\n';
      } else {
        cout << intQueue.back() << '\n';
      }
    }
  }
}
