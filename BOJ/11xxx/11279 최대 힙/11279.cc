#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int x;
  priority_queue<int> maxHeap;
  for (int i = 0; i < n; i++) {
    cin >> x;

    if (x) {
      maxHeap.push(x);
    } else {
      if (!maxHeap.empty()) {
        x = maxHeap.top();
        maxHeap.pop();
      }

      cout << x << '\n';
    }
  }
}
