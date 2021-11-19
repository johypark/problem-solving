#include <iostream>

using namespace std;

int main() {
  int x;
  cin >> x;

  // Calculate sum
  int sum = 1, numerator = 1;
  while (numerator <= x) {
    numerator += sum++;
  }

  // Calculate numerator
  numerator -= x;
  if (sum % 2)
    // If sum is odd, reverse numerator
    numerator = sum - numerator;

  cout << numerator << '/' << sum - numerator << endl;
}
