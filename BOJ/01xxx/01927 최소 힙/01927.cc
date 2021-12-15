#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int x;
  priority_queue<int, vector<int>, greater<>> minHeap;
  for (int i = 0; i < n; i++) {
    cin >> x;

    if (x) {
      minHeap.push(x);
    } else {
      if (!minHeap.empty()) {
        x = minHeap.top();
        minHeap.pop();
      }

      cout << x << '\n';
    }
  }
}
