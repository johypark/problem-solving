#include <iostream>
#include <set>

using namespace std;

int main() {
  string s;
  cin >> s;

  set<string> substrs;
  for (size_t i = 0; i < s.size(); i++)
    for (size_t j = 1; j <= s.size() - i; j++)
      substrs.insert(s.substr(i, j));

  cout << substrs.size() << endl;
}
