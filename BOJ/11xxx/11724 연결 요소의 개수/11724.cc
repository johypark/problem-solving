#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int getConnectedComponentCount(const vector<vector<int>> &graph) {
  vector<int> isVisited(graph.size());
  queue<int> q;
  int count = 0;
  for (size_t i = 1; i < graph.size(); i++) {
    if (!isVisited[i]) {
      q.push(i);
      isVisited[i] = true;

      while (!q.empty()) {
        for (const int &u : graph[q.front()]) {
          if (!isVisited[u]) {
            q.push(u);
            isVisited[u] = true;
          }
        }

        q.pop();
      }

      count++;
    }
  }

  return count;
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> graph(n + 1);
  int u, v;
  for (int i = 0; i < m; i++) {
    cin >> u >> v;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  cout << getConnectedComponentCount(graph) << endl;
}
