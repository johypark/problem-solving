#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int d, h, w;
  cin >> d >> h >> w;

  double multiplier = d / sqrt(h * h + w * w);
  int height = h * multiplier;
  int width = w * multiplier;
  cout << height << ' ' << width << endl;
}
