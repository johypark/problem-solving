#include <iostream>
#include <vector>

using namespace std;

int countConnectedComputers(const vector<vector<bool>> &graph,
                            vector<bool> &isVisited, int v) {
  isVisited[v] = true;

  int count = 0;
  for (size_t i = 1; i < graph.size(); i++)
    if (!isVisited[i] && graph[v][i])
      count += countConnectedComputers(graph, isVisited, i);

  return count + 1;
}

int countConnectedComputers(const vector<vector<bool>> &graph, int v) {
  vector<bool> isVisited(graph.size());

  return countConnectedComputers(graph, isVisited, v) - 1;
}

int main() {
  int n, m;
  cin >> n >> m;

  int a, b;
  vector<vector<bool>> graph(n + 1, vector<bool>(n + 1));
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    graph[a][b] = true;
    graph[b][a] = true;
  }

  cout << countConnectedComputers(graph, 1) << endl;
}
