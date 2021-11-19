#include <array>
#include <iostream>

using namespace std;

bool isGroupWord(const string &str) {
  const int ALPHABET_NUM = 26;
  array<bool, ALPHABET_NUM> alphabetCounts = {false};

  char prev = 0;
  for (const char &ch : str) {
    if (prev != ch) {
      if (alphabetCounts[ch - 'a'])
        return false;

      alphabetCounts[ch - 'a'] = true;
    }

    prev = ch;
  }

  return true;
}

int main() {
  int n;
  cin >> n;

  string str;
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> str;
    count += isGroupWord(str);
  }

  cout << count << endl;
}
