#include <iostream>
#include <set>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string str;
  set<string> s;
  for (int i = 0; i < n; i++) {
    cin >> str;
    s.insert(str);
  }

  int count = 0;
  for (int i = 0; i < m; i++) {
    cin >> str;
    count += (s.find(str) != s.end());
  }

  cout << count << endl;
}
