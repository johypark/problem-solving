#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

void printDFS(const vector<set<int>> &graph, vector<bool> &isVisited, int v) {
  isVisited[v] = true;
  cout << v << ' ';

  for (const int &u : graph[v])
    if (!isVisited[u])
      printDFS(graph, isVisited, u);
}

void printDFS(const vector<set<int>> &graph, int startVertex) {
  vector<bool> isVisited(graph.size());
  printDFS(graph, isVisited, startVertex);

  cout << '\n';
}

void printBFS(const vector<set<int>> &graph, int startVertex) {
  queue<int> q;
  q.push(startVertex);

  vector<bool> isVisited(graph.size());
  isVisited[startVertex] = true;

  while (!q.empty()) {
    int v = q.front();
    for (const int &u : graph[v]) {
      if (!isVisited[u]) {
        q.push(u);
        isVisited[u] = true;
      }
    }

    cout << v << ' ';
    q.pop();
  }

  cout << '\n';
}

int main() {
  int n, m, v;
  cin >> n >> m >> v;

  int a, b;
  vector<set<int>> graph(n + 1);
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    graph[a].insert(b);
    graph[b].insert(a);
  }

  printDFS(graph, v);
  printBFS(graph, v);
}
