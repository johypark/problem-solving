#include <climits>
#include <iostream>
#include <vector>

using namespace std;

enum { MAX_HEIGHT = 256 };

int main() {
  int n, m, b;
  cin >> n >> m >> b;

  vector<vector<int>> heights(n, vector<int>(m));
  int minHeight = MAX_HEIGHT;
  int maxHeight = 0;
  for (auto &row : heights) {
    for (int &height : row) {
      cin >> height;
      minHeight = min(height, minHeight);
      maxHeight = max(height, maxHeight);
    }
  }

  int block, sec, diff;
  int minSec = INT_MAX;
  int minSecHeight;
  for (int i = minHeight; i <= maxHeight; i++) {
    block = b;
    sec = 0;
    for (const auto &row : heights) {
      for (const int &height : row) {
        diff = i - height;
        block -= diff;

        if (diff < 0)
          diff *= -2;

        sec += diff;
      }
    }

    if (sec <= minSec && block >= 0) {
      minSec = sec;
      minSecHeight = i;
    }
  }

  cout << minSec << ' ' << minSecHeight << endl;
}
