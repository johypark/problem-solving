#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int ripenTomatoes(const vector<vector<vector<int>>> &tomatoes) {
  const vector<tuple<int, int, int>> directions = {
      {-1, 0, 0}, {1, 0, 0}, {0, -1, 0}, {0, 1, 0}, {0, 0, -1}, {0, 0, 1}};

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
  int currDay = 0;
  while (!q.empty()) {
    auto [x, y, z, day] = q.front();
    size_t nx, ny, nz;
    for (const auto &direction : directions) {
      nx = x + get<0>(direction);
      ny = y + get<1>(direction);
      nz = z + get<2>(direction);
      if (nx < tomatoes.front().front().size() &&
          ny < tomatoes.front().size() && nz < tomatoes.size() &&
          !tomatoes[nz][ny][nx] && !isVisited[nz][ny][nx]) {
        isVisited[nz][ny][nx] = true;
        q.push({nx, ny, nz, day + 1});
      }
    }

    currDay = day;
    q.pop();
  }

  // If tomatoes didn't ripen
  for (size_t i = 0; i < tomatoes.size(); i++)
    for (size_t j = 0; j < tomatoes.front().size(); j++)
      for (size_t k = 0; k < tomatoes.front().front().size(); k++)
        if (tomatoes[i][j][k] == 0 && !isVisited[i][j][k])
          return -1;

  return currDay;
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

  cout << ripenTomatoes(tomatoes) << endl;
}
