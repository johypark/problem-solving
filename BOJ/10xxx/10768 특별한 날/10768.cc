#include <iostream>

using namespace std;

int main() {
  int month, day;
  cin >> month >> day;

  int month2day2 = month * 100 + day;
  if (month2day2 < 218)
    cout << "Before" << endl;
  else if (month2day2 > 218)
    cout << "After" << endl;
  else
    cout << "Special" << endl;
}
