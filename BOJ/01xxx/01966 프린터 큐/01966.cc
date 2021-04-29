// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <queue>

int main(int argc, char* argv[]) {
  size_t t, n, m, priority;

  std::cin >> t;
  for (size_t i = 0; i < t; i++) {
    std::cin >> n >> m;

    std::priority_queue<size_t> priority_queue;
    std::queue<std::pair<size_t, size_t>> queue;
    for (size_t i = 0; i < n; i++) {
      std::cin >> priority;
      priority_queue.push(priority);
      queue.push({priority, i});
    }

    size_t count = 0;
    while (true) {
      if (queue.front().first == priority_queue.top()) {
        count++;

        if (queue.front().second == m) break;

        priority_queue.pop();
        queue.pop();
      } else {
        queue.push(queue.front());
        queue.pop();
      }
    }

    std::cout << count << '\n';
  }
}
