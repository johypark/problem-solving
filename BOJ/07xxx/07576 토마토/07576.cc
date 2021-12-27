#include <algorithm>
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int bfs(const vector<vector<int>> &tomatoes) {
  queue<tuple<size_t, size_t, int>> q;
  for (size_t i = 0; i < tomatoes.size(); i++)
    for (size_t j = 0; j < tomatoes.front().size(); j++)
      if (tomatoes[i][j] == 1)
        q.push({j, i, 0});

  vector<vector<bool>> isVisited(tomatoes.size(),
                                 vector<bool>(tomatoes.front().size()));
  int maxDay = 0;
  while (!q.empty()) {
    auto [x, y, day] = q.front();
    if (tomatoes[y][x] != -1 && !isVisited[y][x]) {
      isVisited[y][x] = true;

      if (x > 0)
        q.push({x - 1, y, day + 1});
      if (x < tomatoes.front().size() - 1)
        q.push({x + 1, y, day + 1});
      if (y > 0)
        q.push({x, y - 1, day + 1});
      if (y < tomatoes.size() - 1)
        q.push({x, y + 1, day + 1});

      maxDay = max(maxDay, static_cast<int>(day));
    }

    q.pop();
  }

  for (size_t i = 0; i < tomatoes.size(); i++)
    for (size_t j = 0; j < tomatoes.front().size(); j++)
      if (tomatoes[i][j] == 0 && !isVisited[i][j])
        return -1;

  return maxDay;
}

int main() {
  int m, n;
  cin >> m >> n;

  vector<vector<int>> tomatoes(n, vector<int>(m));
  for (auto &row : tomatoes)
    for (int &tomato : row)
      cin >> tomato;

  cout << bfs(tomatoes) << endl;
}
