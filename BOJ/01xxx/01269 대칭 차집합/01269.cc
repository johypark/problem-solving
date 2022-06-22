#include <iostream>
#include <set>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  int element;
  set<int> a, b;
  for (int i = 0; i < n; i++) {
    cin >> element;
    a.insert(element);
  }
  for (int i = 0; i < m; i++) {
    cin >> element;
    b.insert(element);
  }

  int count = 0;
  for (const int &element : a) {
    count += b.find(element) != b.end();
  }

  cout << n + m - count * 2 << endl;
}
