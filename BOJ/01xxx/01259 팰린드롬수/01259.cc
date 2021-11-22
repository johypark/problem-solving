#include <iostream>

using namespace std;

bool isPalindrom(const string &word) {
  for (size_t i = 0; i < word.size() / 2; i++)
    if (word[i] != word[word.size() - 1 - i])
      return false;

  return true;
}

int main() {
  string num;
  while (true) {
    cin >> num;

    if (num == "0")
      return 0;

    cout << (isPalindrom(num) ? "yes" : "no") << '\n';
  }
}
