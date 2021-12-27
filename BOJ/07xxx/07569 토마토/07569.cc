#include <algorithm>
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int bfs(const vector<vector<vector<int>>> &tomatoes) {
  queue<tuple<size_t, size_t, size_t, int>> q;
  for (size_t i = 0; i < tomatoes.size(); i++)
    for (size_t j = 0; j < tomatoes.front().size(); j++)
      for (size_t k = 0; k < tomatoes.front().front().size(); k++)
        if (tomatoes[i][j][k] == 1)
          q.push({k, j, i, 0});

  vector<vector<vector<bool>>> isVisited(
      tomatoes.size(),
      vector<vector<bool>>(tomatoes.front().size(),
                           vector<bool>(tomatoes.front().front().size())));
  int maxDay = 0;
  while (!q.empty()) {
    auto [x, y, z, day] = q.front();
    if (tomatoes[z][y][x] != -1 && !isVisited[z][y][x]) {
      isVisited[z][y][x] = true;

      if (x > 0)
        q.push({x - 1, y, z, day + 1});
      if (x < tomatoes.front().front().size() - 1)
        q.push({x + 1, y, z, day + 1});
      if (y > 0)
        q.push({x, y - 1, z, day + 1});
      if (y < tomatoes.front().size() - 1)
        q.push({x, y + 1, z, day + 1});
      if (z > 0)
        q.push({x, y, z - 1, day + 1});
      if (z < tomatoes.size() - 1)
        q.push({x, y, z + 1, day + 1});

      maxDay = max(maxDay, static_cast<int>(day));
    }

    q.pop();
  }

  for (size_t i = 0; i < tomatoes.size(); i++)
    for (size_t j = 0; j < tomatoes.front().size(); j++)
      for (size_t k = 0; k < tomatoes.front().front().size(); k++)
        if (tomatoes[i][j][k] == 0 && !isVisited[i][j][k])
          return -1;

  return maxDay;
}

int main() {
  int m, n, h;
  cin >> m >> n >> h;

  vector<vector<vector<int>>> tomatoes(h,
                                       vector<vector<int>>(n, vector<int>(m)));
  for (auto &array : tomatoes)
    for (auto &row : array)
      for (int &tomato : row)
        cin >> tomato;

  cout << bfs(tomatoes) << endl;
}
