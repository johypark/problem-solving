#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int getMinPathLength(const vector<vector<bool>> &maze) {
  const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

  queue<tuple<size_t, size_t, int, bool>> q;
  q.push({0, 0, 1, true});

  vector<vector<vector<bool>>> isVisited(
      maze.size(), vector<vector<bool>>(maze.front().size(), vector<bool>(2)));
  while (!q.empty()) {
    auto [x, y, length, canBrake] = q.front();
    if (x == maze.front().size() - 1 && y == maze.size() - 1)
      return length;

    size_t nx, ny;
    for (size_t i = 0; i < directions.size(); i++) {
      nx = x + directions[i].first;
      ny = y + directions[i].second;
      if (nx < maze.front().size() && ny < maze.size() &&
          !isVisited[ny][nx][canBrake]) {
        if (maze[ny][nx]) {
          isVisited[ny][nx][canBrake] = true;
          q.push({nx, ny, length + 1, canBrake});
        } else if (canBrake) {
          isVisited[ny][nx][canBrake] = true;
          q.push({nx, ny, length + 1, false});
        }
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
      row[i] = input[i] - '1';
  }

  cout << getMinPathLength(maze) << endl;
}
