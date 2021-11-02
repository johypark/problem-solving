#include <iostream>
#include <vector>

enum { LENGTH = 5 };

using namespace std;

int getVerificationNumber(const vector<int> &numbers) {
  int verificationNumber;
  int sum = 0;

  for (const int &number : numbers)
    sum += number * number;

  verificationNumber = sum % 10;
  return verificationNumber;
}

int main() {
  vector<int> numbers(LENGTH);
  for (int &number : numbers)
    cin >> number;

  cout << getVerificationNumber(numbers) << endl;
}
