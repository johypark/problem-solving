#include <iostream>

using namespace std;

int main() {
  int score;
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    cin >> score;
    sum += score;
  }

  cout << sum << endl;
}
