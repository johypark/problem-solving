#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int getMinPathLength(const vector<vector<bool>> &maze) {
  vector<vector<bool>> isVisited(maze.size(),
                                 vector<bool>(maze.front().size()));
  queue<tuple<size_t, size_t, int>> q;
  q.push({0, 0, 1});

  while (!q.empty()) {
    auto [x, y, len] = q.front();
    if (!maze[y][x] || isVisited[y][x]) {
      q.pop();
      continue;
    }

    isVisited[y][x] = true;

    if (x == maze.front().size() - 1 && y == maze.size() - 1)
      return len;

    if (x > 0)
      q.push({x - 1, y, len + 1});
    if (x < maze.front().size() - 1)
      q.push({x + 1, y, len + 1});
    if (y > 0)
      q.push({x, y - 1, len + 1});
    if (y < maze.size() - 1)
      q.push({x, y + 1, len + 1});

    q.pop();
  }

  return -1;
}

int main() {
  int n, m;
  cin >> n >> m;

  char input;
  vector<vector<bool>> maze(n, vector<bool>(m));
  for (size_t i = 0; i < maze.size(); i++) {
    for (size_t j = 0; j < maze.front().size(); j++) {
      cin >> input;
      maze[i][j] = atoi(&input);
    }
  }

  cout << getMinPathLength(maze) << endl;
}
