#include <iostream>

using namespace std;

int main() {
  int birthYear, birthMonth, birthDay;
  int currYear, currMonth, currDay;
  cin >> birthYear >> birthMonth >> birthDay;
  cin >> currYear >> currMonth >> currDay;

  int birthMMDD = birthMonth * 100 + birthDay;
  int currMMDD = currMonth * 100 + currDay;
  cout << currYear - birthYear - (currMMDD < birthMMDD) << '\n';
  cout << currYear - birthYear + 1 << '\n';
  cout << currYear - birthYear << endl;
}
