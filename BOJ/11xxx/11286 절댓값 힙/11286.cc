#include <cmath>
#include <iostream>
#include <queue>

using namespace std;

struct Compare {
  bool operator()(int a, int b) const {
    if (abs(a) == abs(b))
      return a > b;

    return abs(a) > abs(b);
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int x;
  priority_queue<int, vector<int>, Compare> minAbsHeap;
  for (int i = 0; i < n; i++) {
    cin >> x;

    if (x) {
      minAbsHeap.push(x);
    } else {
      if (!minAbsHeap.empty()) {
        x = minAbsHeap.top();
        minAbsHeap.pop();
      }

      cout << x << '\n';
    }
  }
}
