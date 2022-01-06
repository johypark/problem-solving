#include <iostream>
#include <map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  cin >> n >> m;

  string address, password;
  map<string, string> passwords;
  for (int i = 0; i < n; i++) {
    cin >> address >> password;
    passwords[address] = password;
  }

  for (int i = 0; i < m; i++) {
    cin >> address;
    cout << passwords[address] << '\n';
  }
}
