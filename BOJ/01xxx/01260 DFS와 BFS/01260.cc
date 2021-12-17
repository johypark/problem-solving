#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void printDFS(const vector<vector<bool>> &graph, vector<bool> &isVisited,
              int v) {
  isVisited[v] = true;
  cout << v << ' ';

  for (size_t i = 1; i < graph.size(); i++)
    if (!isVisited[i] && graph[v][i])
      printDFS(graph, isVisited, i);
}

void printDFS(const vector<vector<bool>> &graph, int v) {
  vector<bool> isVisited(graph.size());
  printDFS(graph, isVisited, v);

  cout << '\n';
}

void printBFS(const vector<vector<bool>> &graph, int v) {
  queue<int> q;
  vector<bool> isVisited(graph.size());
  q.push(v);
  isVisited[v] = true;

  while (!q.empty()) {
    for (size_t i = 1; i < graph.size(); i++) {
      if (!isVisited[i] && graph[q.front()][i]) {
        q.push(i);
        isVisited[i] = true;
      }
    }

    cout << q.front() << ' ';
    q.pop();
  }

  cout << '\n';
}

int main() {
  int n, m, v;
  cin >> n >> m >> v;

  int a, b;
  vector<vector<bool>> graph(n + 1, vector<bool>(n + 1));
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    graph[a][b] = true;
    graph[b][a] = true;
  }

  printDFS(graph, v);
  printBFS(graph, v);
}
