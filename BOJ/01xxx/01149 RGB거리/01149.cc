#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int r, g, b;
  int minR = 0, minG = 0, minB = 0;
  for (int i = 0; i < n; i++) {
    cin >> r >> g >> b;

    r += min(minG, minB);
    g += min(minR, minB);
    b += min(minR, minG);
    minR = r;
    minG = g;
    minB = b;
  }

  cout << min({minR, minG, minB}) << endl;
}
