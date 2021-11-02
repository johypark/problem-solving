#include <iostream>
#include <string>

using namespace std;

int getScore(const string &str) {
  int count = 0;
  int score = 0;
  for (const char &ch : str) {
    if (ch == 'O')
      score += ++count;
    else
      count = 0;
  }

  return score;
}

int main() {
  int n;
  cin >> n;

  string str;
  for (int i = 0; i < n; i++) {
    cin >> str;
    cout << getScore(str) << '\n';
  }
}
