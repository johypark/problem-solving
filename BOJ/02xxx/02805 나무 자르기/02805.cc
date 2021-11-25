#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getMaxSawbladeHeight(const vector<int> &woods, int m) {
  long long low = 0;
  long long high = *max_element(woods.begin(), woods.end());
  long long mid, length;
  while (low < high) {
    mid = low + (high - low) / 2;
    length = 0;
    for (const int &wood : woods)
      if (wood > mid)
        length += wood - mid;

    if (length >= m)
      low = mid + 1;
    else
      high = mid;
  }

  // Return upper bound - 1
  return low - 1;
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> woods(n);
  for (int &wood : woods)
    cin >> wood;

  cout << getMaxSawbladeHeight(woods, m) << endl;
}
