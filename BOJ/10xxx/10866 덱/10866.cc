#include <deque>
#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  deque<int> intDeque;
  string command;
  int num;
  for (int i = 0; i < n; i++) {
    cin >> command;

    if (command == "push_front") {
      cin >> num;
      intDeque.push_front(num);
    } else if (command == "push_back") {
      cin >> num;
      intDeque.push_back(num);
    } else if (command == "pop_front") {
      if (intDeque.empty()) {
        cout << -1 << '\n';
      } else {
        cout << intDeque.front() << '\n';
        intDeque.pop_front();
      }
    } else if (command == "pop_back") {
      if (intDeque.empty()) {
        cout << -1 << '\n';
      } else {
        cout << intDeque.back() << '\n';
        intDeque.pop_back();
      }
    } else if (command == "size") {
      cout << intDeque.size() << '\n';
    } else if (command == "empty") {
      cout << intDeque.empty() << '\n';
    } else if (command == "front") {
      if (intDeque.empty()) {
        cout << -1 << '\n';
      } else {
        cout << intDeque.front() << '\n';
      }
    } else if (command == "back") {
      if (intDeque.empty()) {
        cout << -1 << '\n';
      } else {
        cout << intDeque.back() << '\n';
      }
    }
  }
}
