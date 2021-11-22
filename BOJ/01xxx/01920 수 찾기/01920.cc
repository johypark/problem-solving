#include <iostream>
#include <set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  set<int> a;
  int num;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> num;
    a.insert(num);
  }

  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> num;
    cout << (a.find(num) != a.end()) << '\n';
  }
}
