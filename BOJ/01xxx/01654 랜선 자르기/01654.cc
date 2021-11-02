#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getMaxCableLength(const vector<int> &cables, int n) {
  unsigned int left = 1;
  unsigned int right = *max_element(cables.begin(), cables.end());
  unsigned int mid = (left + right) / 2;
  int count;
  while (left <= right) {
    count = 0;
    for (const int &cable : cables)
      count += cable / mid;

    if (count >= n)
      left = mid + 1;
    else
      right = mid - 1;

    mid = (left + right) / 2;
  }

  return mid;
}

int main() {
  int k, n;
  cin >> k >> n;

  vector<int> cables(k);
  for (int &cable : cables)
    cin >> cable;

  cout << getMaxCableLength(cables, n) << endl;
}
