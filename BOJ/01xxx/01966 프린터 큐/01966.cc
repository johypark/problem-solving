#include <iostream>
#include <queue>

using namespace std;

int main() {
  int t;
  cin >> t;

  int n, m, priority;
  for (int i = 0; i < t; i++) {
    cin >> n >> m;

    priority_queue<int> priorityQueue;
    queue<pair<int, int>> printerQueue;
    for (int i = 0; i < n; i++) {
      cin >> priority;
      priorityQueue.push(priority);
      printerQueue.push({priority, i});
    }

    int count = 0;
    while (true) {
      if (printerQueue.front().first == priorityQueue.top()) {
        count++;

        if (printerQueue.front().second == m)
          break;

        priorityQueue.pop();
        printerQueue.pop();
      } else {
        printerQueue.push(printerQueue.front());
        printerQueue.pop();
      }
    }

    cout << count << '\n';
  }
}
