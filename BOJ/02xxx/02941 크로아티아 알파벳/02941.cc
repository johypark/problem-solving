#include <array>
#include <iostream>

using namespace std;

int countCroatianAlphabet(string str) {
  const array<string, 8> CROATIAN_LETTERS = {"c=", "c-", "dz=", "d-",
                                             "lj", "nj", "s=",  "z="};

  for (const string &croatianLetter : CROATIAN_LETTERS) {
    size_t i = str.find(croatianLetter);
    while (i != string::npos) {
      str.replace(i, croatianLetter.size(), "?");
      i = str.find(croatianLetter);
    }
  }

  return str.size();
}

int main() {
  string s;
  cin >> s;

  cout << countCroatianAlphabet(s) << endl;
}
