#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int m;
  cin >> m;

  string command;
  int s = 0;
  int x;
  for (int i = 0; i < m; i++) {
    cin >> command;
    if (command == "add") {
      cin >> x;
      s |= (1 << x);
    } else if (command == "remove") {
      cin >> x;
      s &= ~(1 << x);
    } else if (command == "check") {
      cin >> x;
      cout << ((s >> x) & 1) << '\n';
    } else if (command == "toggle") {
      cin >> x;
      s ^= (1 << x);
    } else if (command == "all") {
      s = ~0;
    } else if (command == "empty") {
      s = 0;
    }
  }
}
