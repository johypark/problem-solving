#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  int input;
  vector<vector<bool>> graph(n, vector<bool>(n));
  for (size_t i = 0; i < graph.size(); i++) {
    for (size_t j = 0; j < graph.size(); j++) {
      cin >> input;
      graph[i][j] = input;
    }
  }

  vector<vector<bool>> hasPath = graph;
  for (size_t k = 0; k < hasPath.size(); k++)
    for (size_t i = 0; i < hasPath.size(); i++)
      for (size_t j = 0; j < hasPath.front().size(); j++)
        hasPath[i][j] = hasPath[i][j] | (hasPath[i][k] & hasPath[k][j]);

  for (size_t i = 0; i < graph.size(); i++) {
    for (size_t j = 0; j < graph.size(); j++)
      cout << hasPath[i][j] << ' ';
    cout << '\n';
  }
}
