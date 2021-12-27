#include <array>
#include <iostream>
#include <queue>

enum { MAX_POINT = 100000 };

using namespace std;

int getMinFindTime(int n, int k) {
  queue<pair<int, int>> q;
  q.push({n, 0});

  array<int, MAX_POINT + 1> isVisited = {false};
  while (!q.empty()) {
    auto [x, time] = q.front();
    if (!isVisited[x]) {
      if (x == k)
        return time;

      isVisited[x] = true;

      if (x > 0)
        q.push({x - 1, time + 1});
      if (x < MAX_POINT)
        q.push({x + 1, time + 1});
      if (2 * x <= MAX_POINT)
        q.push({2 * x, time + 1});
    }

    q.pop();
  }

  return -1;
}

int main() {
  int n, k;
  cin >> n >> k;

  cout << getMinFindTime(n, k) << endl;
}
