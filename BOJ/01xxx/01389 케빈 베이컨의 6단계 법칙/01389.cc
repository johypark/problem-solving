#include <algorithm>
#include <climits>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

// Floyd-Warshall
int getKevinBacon(const vector<vector<bool>> &graph) {
  vector<vector<int>> dist(graph.size(), vector<int>(graph.size()));
  for (size_t i = 1; i < dist.size(); i++)
    for (size_t j = 1; j < dist.size(); j++)
      dist[i][j] = graph[i][j] ? 1 : graph.size();

  for (size_t k = 1; k < dist.size(); k++)
    for (size_t i = 1; i < dist.size(); i++)
      for (size_t j = 1; j < dist.size(); j++)
        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

  int kevinBaconNum;
  int minKevinBaconNum = INT_MAX;
  int kevinBacon;
  for (size_t i = 1; i < dist.size(); i++) {
    kevinBaconNum = reduce(dist[i].begin(), dist[i].end());
    if (kevinBaconNum < minKevinBaconNum) {
      kevinBacon = i;
      minKevinBaconNum = kevinBaconNum;
    }
  }

  return kevinBacon;
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

  cout << getKevinBacon(graph) << endl;
}
