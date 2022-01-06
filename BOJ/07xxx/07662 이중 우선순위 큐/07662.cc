#include <iostream>
#include <set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  int k;
  for (int i = 0; i < t; i++) {
    cin >> k;

    multiset<int> q;
    char command;
    int n;
    for (int j = 0; j < k; j++) {
      cin >> command >> n;
      switch (command) {
      case 'I':
        q.insert(n);
        break;

      case 'D':
        if (!q.empty()) {
          if (n == 1)
            q.erase(--q.end());
          else
            q.erase(q.begin());
        }
        break;
      }
    }

    if (q.empty())
      cout << "EMPTY" << '\n';
    else
      cout << *--q.end() << ' ' << *q.begin() << '\n';
  }
}
