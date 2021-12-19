#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Upper bound - 1
int getMaxCableLength(const vector<int> &cables, int n) {
  long long low = 1;
  long long high =
      static_cast<long long>(*max_element(cables.begin(), cables.end())) + 1;
  long long mid, count;
  while (low < high) {
    mid = low + (high - low) / 2;
    count = 0;
    for (const int &cable : cables)
      count += cable / mid;

    if (count >= n)
      low = mid + 1;
    else
      high = mid;
  }

  return low - 1;
}

int main() {
  int k, n;
  cin >> k >> n;

  vector<int> cables(k);
  for (int &cable : cables)
    cin >> cable;

  cout << getMaxCableLength(cables, n) << endl;
}
