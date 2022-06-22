#include <iostream>

using namespace std;

int getMaxSnowmanSize(int x, int k) {
  int size = k * 7;
  for (int i = 0; i < 3; i++) {
    if (size <= x)
      return size;

    size /= 2;
  }

  return 0;
}

int main() {
  int x, k;
  cin >> x >> k;

  x *= 1000;
  k *= 1000;
  cout << getMaxSnowmanSize(x, k) << endl;
}
