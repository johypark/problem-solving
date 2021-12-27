#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int getMinPathLength(const vector<vector<bool>> &maze) {
  queue<tuple<size_t, size_t, int>> q;
  q.push({0, 0, 1});

  vector<vector<bool>> isVisited(maze.size(),
                                 vector<bool>(maze.front().size()));
  while (!q.empty()) {
    auto [x, y, length] = q.front();
    if (maze[y][x] && !isVisited[y][x]) {
      if (x == maze.front().size() - 1 && y == maze.size() - 1)
        return length;

      isVisited[y][x] = true;

      if (x > 0)
        q.push({x - 1, y, length + 1});
      if (x < maze.front().size() - 1)
        q.push({x + 1, y, length + 1});
      if (y > 0)
        q.push({x, y - 1, length + 1});
      if (y < maze.size() - 1)
        q.push({x, y + 1, length + 1});
    }

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
