#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int getMinPathLength(const vector<vector<bool>> &maze) {
  const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

  queue<tuple<size_t, size_t, int>> q;
  q.push({0, 0, 1});

  vector<vector<bool>> isVisited(maze.size(),
                                 vector<bool>(maze.front().size()));
  while (!q.empty()) {
    auto [x, y, length] = q.front();
    if (x == maze.front().size() - 1 && y == maze.size() - 1)
      return length;

    size_t nx, ny;
    for (size_t i = 0; i < directions.size(); i++) {
      nx = x + directions[i].first;
      ny = y + directions[i].second;
      if (nx < maze.front().size() && ny < maze.size() && maze[ny][nx] &&
          !isVisited[ny][nx]) {
        isVisited[ny][nx] = true;
        q.push({nx, ny, length + 1});
      }
    }

    q.pop();
  }

  return -1;
}

int main() {
  int n, m;
  cin >> n >> m;

  string input;
  vector<vector<bool>> maze(n, vector<bool>(m));
  for (auto &row : maze) {
    cin >> input;
    for (size_t i = 0; i < row.size(); i++)
      row[i] = input[i] - '0';
  }

  cout << getMinPathLength(maze) << endl;
}
