#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getMaxScore(const vector<int> &stairs) {
  int prev3 = 0;
  int prev2 = 0;
  int prev = 0;
  int curr = stairs.front();
  for (size_t i = 1; i < stairs.size(); i++) {
    prev3 = prev2;
    prev2 = prev;
    prev = curr;
    curr = stairs[i] + max(prev2, prev3 + stairs[i - 1]);
  }

  return curr;
}

int main() {
  int n;
  cin >> n;

  vector<int> stairs(n);
  for (int &stair : stairs)
    cin >> stair;

  cout << getMaxScore(stairs) << endl;
}
