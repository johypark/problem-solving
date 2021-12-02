#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getMaxWine(const vector<int> &wines) {
  int prev3 = 0;
  int prev2 = 0;
  int prev = wines[0];
  int curr;
  for (size_t i = 1; i < wines.size(); i++) {
    curr = max({prev, prev2 + wines[i], prev3 + wines[i - 1] + wines[i]});

    prev3 = prev2;
    prev2 = prev;
    prev = curr;
  }

  return prev;
}

int main() {
  int n;
  cin >> n;

  vector<int> wines(n);
  for (int &wine : wines)
    cin >> wine;

  cout << getMaxWine(wines) << endl;
}
