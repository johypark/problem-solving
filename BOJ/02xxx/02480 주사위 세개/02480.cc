#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

int main() {
  array<int, 3> dice;
  for (int &die : dice)
    cin >> die;

  sort(dice.begin(), dice.end());

  if (dice[0] == dice[2])
    cout << 10000 + dice[0] * 1000 << endl;
  else if (dice[0] == dice[1] || dice[1] == dice[2])
    cout << 1000 + dice[1] * 100 << endl;
  else
    cout << dice[2] * 100 << endl;
}
