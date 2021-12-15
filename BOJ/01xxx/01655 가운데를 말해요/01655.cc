#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int num;
  priority_queue<int> maxHeap;
  priority_queue<int, vector<int>, greater<>> minHeap;
  for (int i = 0; i < n; i++) {
    cin >> num;

    if (i % 2 == 0)
      maxHeap.push(num);
    else
      minHeap.push(num);

    // Swap
    if (i != 0 && maxHeap.top() > minHeap.top()) {
      minHeap.push(maxHeap.top());
      maxHeap.pop();
      maxHeap.push(minHeap.top());
      minHeap.pop();
    }

    cout << maxHeap.top() << '\n';
  }
}
