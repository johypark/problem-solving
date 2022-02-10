#include <iostream>

using namespace std;

int main() {
  int input;
  int sum = 91;
  for (int i = 11; i <= 13; i++) {
    cin >> input;
    sum += i % 2 ? input : input * 3;
  }

  cout << "The 1-3-sum is " << sum << endl;
}
