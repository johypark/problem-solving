#include <iostream>

using namespace std;

int countWords(const string &str) {
  int count = 0;
  bool isSpace = true;

  for (const char &ch : str) {
    if (isSpace && !isspace(ch))
      count++;
    isSpace = isspace(ch);
  }

  return count;
}

int main() {
  string str;
  getline(cin, str);

  cout << countWords(str) << endl;
}
