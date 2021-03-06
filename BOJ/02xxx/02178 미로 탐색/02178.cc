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
  isVisited[0][0] = true;

  while (!q.empty()) {
    auto [x, y, length] = q.front();
    if (x == maze.front().size() - 1 && y == maze.size() - 1)
      return length;

    size_t nx, ny;
    for (const auto &direction : directions) {
      nx = x + direction.first;
      ny = y + direction.second;
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
