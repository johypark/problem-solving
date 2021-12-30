#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int getMinPathLength(const vector<vector<bool>> &maze) {
  const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

  queue<tuple<size_t, size_t, bool, int>> q;
  q.push({0, 0, true, 1});

  vector<vector<vector<bool>>> isVisited(
      maze.size(), vector<vector<bool>>(maze.front().size(), vector<bool>(2)));
  isVisited[0][0][true] = true;

  while (!q.empty()) {
    auto [x, y, canBrake, length] = q.front();
    if (x == maze.front().size() - 1 && y == maze.size() - 1)
      return length;

    size_t nx, ny;
    for (const auto &direction : directions) {
      nx = x + direction.first;
      ny = y + direction.second;
      if (nx < maze.front().size() && ny < maze.size() &&
          !isVisited[ny][nx][canBrake]) {
        if (maze[ny][nx]) {
          isVisited[ny][nx][canBrake] = true;
          q.push({nx, ny, canBrake, length + 1});
        } else if (canBrake) {
          isVisited[ny][nx][canBrake] = true;
          q.push({nx, ny, false, length + 1});
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
