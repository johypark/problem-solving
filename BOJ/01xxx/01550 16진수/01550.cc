#include <iostream>

using namespace std;

int main() {
  // Save cin flags
  ios_base::fmtflags flags(cin.flags());

  int num;
  cin >> hex >> num;

  cout << num << endl;

  // Reset cin flags
  cin.flags(flags);
}
