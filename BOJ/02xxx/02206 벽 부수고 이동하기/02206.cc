#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int getMinPathLength(const vector<vector<bool>> &maze) {
  queue<tuple<size_t, size_t, int, bool>> q;
  q.push({0, 0, 1, true});

  vector<vector<vector<bool>>> isVisited(
      maze.size(), vector<vector<bool>>(maze.front().size(), vector<bool>(2)));
  while (!q.empty()) {
    auto [x, y, length, canBrake] = q.front();

    if (maze[y][x] && canBrake && !isVisited[y][x][0]) {
      isVisited[y][x][0] = true;
    } else if (!maze[y][x] && canBrake && !isVisited[y][x][1]) {
      isVisited[y][x][1] = true;
      canBrake = false;
    } else if (maze[y][x] && !canBrake && !isVisited[y][x][1]) {
      isVisited[y][x][1] = true;
    } else {
      q.pop();
      continue;
    }

    if (x == maze.front().size() - 1 && y == maze.size() - 1)
      return length;

    if (x > 0)
      q.push({x - 1, y, length + 1, canBrake});
    if (x < maze.front().size() - 1)
      q.push({x + 1, y, length + 1, canBrake});
    if (y > 0)
      q.push({x, y - 1, length + 1, canBrake});
    if (y < maze.size() - 1)
      q.push({x, y + 1, length + 1, canBrake});

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
      maze[i][j] = !atoi(&input);
    }
  }

  cout << getMinPathLength(maze) << endl;
}
