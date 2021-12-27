#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> records(n);
  bool isZero = true;
  for (int &record : records) {
    cin >> record;
    if (record != 0)
      isZero = false;
  }

  if (isZero)
    cout << "divide by zero" << endl;
  else
    cout << "1.00" << endl;
}
