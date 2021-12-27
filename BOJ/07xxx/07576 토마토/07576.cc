#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int ripenTomatoes(const vector<vector<int>> &tomatoes) {
  const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

  queue<tuple<size_t, size_t, int>> q;
  for (size_t i = 0; i < tomatoes.size(); i++)
    for (size_t j = 0; j < tomatoes.front().size(); j++)
      if (tomatoes[i][j] == 1)
        q.push({j, i, 0});

  vector<vector<bool>> isVisited(tomatoes.size(),
                                 vector<bool>(tomatoes.front().size()));
  int currDay = 0;
  while (!q.empty()) {
    auto [x, y, day] = q.front();
    size_t nx, ny;
    for (size_t i = 0; i < directions.size(); i++) {
      nx = x + directions[i].first;
      ny = y + directions[i].second;
      if (nx < tomatoes.front().size() && ny < tomatoes.size() &&
          !tomatoes[ny][nx] && !isVisited[ny][nx]) {
        isVisited[ny][nx] = true;
        q.push({nx, ny, day + 1});
      }
    }

    currDay = day;
    q.pop();
  }

  // If tomatoes didn't ripen
  for (size_t i = 0; i < tomatoes.size(); i++)
    for (size_t j = 0; j < tomatoes.front().size(); j++)
      if (tomatoes[i][j] == 0 && !isVisited[i][j])
        return -1;

  return currDay;
}

int main() {
  int m, n;
  cin >> m >> n;

  vector<vector<int>> tomatoes(n, vector<int>(m));
  for (auto &row : tomatoes)
    for (int &tomato : row)
      cin >> tomato;

  cout << ripenTomatoes(tomatoes) << endl;
}
