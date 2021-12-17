#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int score;
  int s = 0;
  for (int i = 0; i < 4; i++) {
    cin >> score;
    s += score;
  }

  int t = 0;
  for (int i = 0; i < 4; i++) {
    cin >> score;
    t += score;
  }

  cout << max(s, t) << endl;
}
