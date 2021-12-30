#include <iostream>
#include <vector>

using namespace std;

int countConnectedComputers(const vector<vector<int>> &graph,
                            vector<bool> &isVisited, int v) {
  isVisited[v] = true;

  int count = 0;
  for (const auto &u : graph[v])
    if (!isVisited[u])
      count += countConnectedComputers(graph, isVisited, u);

  return count + 1;
}

int countConnectedComputers(const vector<vector<int>> &graph, int v) {
  vector<bool> isVisited(graph.size());

  return countConnectedComputers(graph, isVisited, v) - 1;
}

int main() {
  int n, m;
  cin >> n >> m;

  int a, b;
  vector<vector<int>> graph(n + 1);
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  cout << countConnectedComputers(graph, 1) << endl;
}
