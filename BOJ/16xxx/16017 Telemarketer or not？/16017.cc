#include <iostream>

using namespace std;

int main() {
  int first, second, third, last;
  cin >> first >> second >> third >> last;

  if ((first == 8 || first == 9) && (last == 8 || last == 9) && second == third)
    cout << "ignore" << endl;
  else
    cout << "answer" << endl;
}
