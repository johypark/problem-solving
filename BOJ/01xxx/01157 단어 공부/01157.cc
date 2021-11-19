#include <array>
#include <iostream>

using namespace std;

char getMostCommonAlphabet(const string &str) {
  const int ALPHABET_NUM = 26;
  const char UNKNOWN = '?';
  array<int, ALPHABET_NUM> alphabetCounts = {0};
  int count = 0;
  char result = UNKNOWN;

  // Count the alphabets are used
  for (const char &alphabet : str)
    alphabetCounts[toupper(alphabet) - 'A']++;

  for (size_t i = 0; i < alphabetCounts.size(); i++) {
    if (alphabetCounts[i] > count) {
      // If the current alphabet is used more often
      count = alphabetCounts[i];
      result = 'A' + i;
    } else if (alphabetCounts[i] == count) {
      // If the most used alphabet is duplicated
      result = UNKNOWN;
    }
  }

  return result;
}

int main() {
  string str;
  cin >> str;

  cout << getMostCommonAlphabet(str) << endl;
}
