#include <iostream>
#include <set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  set<int> a;
  int number;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> number;
    a.insert(number);
  }

  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> number;
    cout << (a.find(number) != a.end()) << '\n';
  }
}
