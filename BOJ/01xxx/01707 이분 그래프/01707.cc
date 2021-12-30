#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool isBipartiteGraph(const vector<vector<int>> &graph) {
  vector<int> setIndices(graph.size());
  queue<int> q;
  for (size_t i = 1; i < graph.size(); i++) {
    if (!setIndices[i]) {
      q.push(i);
      setIndices[i] = 1;
      while (!q.empty()) {
        int v = q.front();
        for (const int &u : graph[v]) {
          if (setIndices[v] == setIndices[u])
            return false;

          // If not visited
          if (!setIndices[u]) {
            setIndices[u] = setIndices[v] == 1 ? 2 : 1;
            q.push(u);
          }
        }

        q.pop();
      }
    }
  }

  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int k;
  cin >> k;

  int v, e;
  for (int i = 0; i < k; i++) {
    cin >> v >> e;

    int u;
    vector<vector<int>> graph(v + 1);
    for (int j = 0; j < e; j++) {
      cin >> u >> v;
      graph[u].push_back(v);
      graph[v].push_back(u);
    }

    cout << (isBipartiteGraph(graph) ? "YES" : "NO") << '\n';
  }
}
