#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  string s;
  cin >> s;

  int count = 0;
  for (size_t i = 0; i < s.size(); i++) {
    if (s[i] == 'I') {
      int k = 0;
      while (i + 2 < s.size() && s[i + 1] == 'O' && s[i + 2] == 'I') {
        k++;
        i += 2;
      }

      if (k >= n)
        count += k - n + 1;
    }
  }

  cout << count << endl;
}
