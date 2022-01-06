#include <array>
#include <iostream>
#include <queue>

enum { MAX_CELL_NUM = 100 };

using namespace std;

int getMinMoveCount(const array<int, MAX_CELL_NUM + 1> &graph) {
  queue<pair<int, int>> q;
  q.push({1, 0});

  array<bool, MAX_CELL_NUM + 1> isVisited = {false};
  isVisited[1] = true;

  while (!q.empty()) {
    auto [v, count] = q.front();
    if (v == MAX_CELL_NUM)
      return count;

    for (int i = v + 1; i <= v + 6 && i <= MAX_CELL_NUM; i++) {
      if (!isVisited[i]) {
        isVisited[i] = true;
        isVisited[graph[i]] = true;
        q.push({graph[i], count + 1});
      }
    }

    q.pop();
  }

  return -1;
}

int main() {
  int n, m;
  cin >> n >> m;

  array<int, MAX_CELL_NUM + 1> graph;
  for (size_t i = 1; i < graph.size(); i++)
    graph[i] = i;

  int x, y;
  for (int i = 0; i < n; i++) {
    cin >> x >> y;
    graph[x] = y;
  }

  int u, v;
  for (int i = 0; i < m; i++) {
    cin >> u >> v;
    graph[u] = v;
  }

  cout << getMinMoveCount(graph) << endl;
}
