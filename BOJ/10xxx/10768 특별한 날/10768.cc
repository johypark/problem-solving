#include <iostream>

using namespace std;

int main() {
  int month, day;
  cin >> month >> day;

  int mmdd = month * 100 + day;
  if (mmdd < 218)
    cout << "Before" << endl;
  else if (mmdd > 218)
    cout << "After" << endl;
  else
    cout << "Special" << endl;
}
