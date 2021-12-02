#include <iostream>

using namespace std;

int main() {
  int sec;
  int sum = 0;
  for (int i = 0; i < 4; i++) {
    cin >> sec;
    sum += sec;
  }

  cout << sum / 60 << '\n' << sum % 60 << endl;
}
