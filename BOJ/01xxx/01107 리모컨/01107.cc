#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

enum { MAX_CHANNEL = 500000 };

using namespace std;

int getPressCount(int channel, const vector<bool> &buttons) {
  if (channel < 0)
    return 0;
  if (channel == 0)
    return buttons[0];

  int count = 0;
  while (channel > 0) {
    if (!buttons[channel % 10])
      return 0;

    channel /= 10;
    count++;
  }

  return count;
}

int getMinPressCount(int n, const vector<bool> &buttons) {
  int minCount = abs(n - 100);
  int count;
  for (int i = 0; i <= MAX_CHANNEL * 2; i++) {
    count = getPressCount(i, buttons);
    if (count) {
      minCount = min(minCount, count + abs(n - i));
    }
  }

  return minCount;
}

int main() {
  int n, m;
  cin >> n >> m;

  int brokenButton;
  vector<bool> buttons(10, true);
  for (int i = 0; i < m; i++) {
    cin >> brokenButton;
    buttons[brokenButton] = false;
  }

  cout << getMinPressCount(n, buttons) << endl;
}
