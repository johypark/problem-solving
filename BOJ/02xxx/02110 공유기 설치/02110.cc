#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getMaxDistance(const vector<int> &houses, int c) {
  int low = 1;
  int high = houses.back() + 1;
  int mid;
  while (low < high) {
    mid = low + (high - low) / 2;

    auto temp = houses.begin();
    bool isValid = true;
    for (int i = 1; i < c; i++) {
      temp = lower_bound(temp + 1, houses.end(), *temp + mid);
      if (temp == houses.end()) {
        isValid = false;
        break;
      }
    }

    if (isValid)
      low = mid + 1;
    else
      high = mid;
  }

  return low - 1;
}

int main() {
  int n, c;
  cin >> n >> c;

  vector<int> houses(n);
  for (int &house : houses)
    cin >> house;

  sort(houses.begin(), houses.end());

  cout << getMaxDistance(houses, c) << endl;
}
