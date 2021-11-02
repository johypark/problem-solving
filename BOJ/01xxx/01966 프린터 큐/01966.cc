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
    queue<pair<int, int>> queue;
    for (int i = 0; i < n; i++) {
      cin >> priority;
      priorityQueue.push(priority);
      queue.push({priority, i});
    }

    int count = 0;
    while (true) {
      if (queue.front().first == priorityQueue.top()) {
        count++;

        if (queue.front().second == m)
          break;

        priorityQueue.pop();
        queue.pop();
      } else {
        queue.push(queue.front());
        queue.pop();
      }
    }

    cout << count << '\n';
  }
}
