#include <iostream>
#include <set>

using namespace std;

struct Compare {
  bool operator()(const string &a, const string &b) const {
    if (a.length() == b.length())
      return a < b;

    return a.length() < b.length();
  }
};

int main() {
  int n;
  cin >> n;

  set<string, Compare> words;
  string word;
  for (int i = 0; i < n; i++) {
    cin >> word;
    words.insert(word);
  }

  for (const string &word : words)
    cout << word << '\n';
}
