#include <iostream>
#include <vector>

using namespace std;

void visitGroup(const vector<vector<bool>> &field,
                const vector<pair<int, int>> &directions,
                vector<vector<bool>> &isVisited, size_t x, size_t y) {
  isVisited[y][x] = true;

  size_t nx, ny;
  for (size_t i = 0; i < directions.size(); i++) {
    nx = x + directions[i].first;
    ny = y + directions[i].second;
    if (nx < field.front().size() && ny < field.size() && field[ny][nx] &&
        !isVisited[ny][nx])
      visitGroup(field, directions, isVisited, nx, ny);
  }
}

int getGroups(const vector<vector<bool>> &field) {
  const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

  vector<vector<bool>> isVisited(field.size(),
                                 vector<bool>(field.front().size()));
  int count = 0;
  for (size_t i = 0; i < field.size(); i++) {
    for (size_t j = 0; j < field.front().size(); j++) {
      if (field[i][j] && !isVisited[i][j]) {
        visitGroup(field, directions, isVisited, j, i);
        count++;
      }
    }
  }

  return count;
}

int main() {
  int t;
  cin >> t;

  int m, n, k;
  for (int i = 0; i < t; i++) {
    cin >> m >> n >> k;

    int x, y;
    vector<vector<bool>> field(n, vector<bool>(m));
    for (int j = 0; j < k; j++) {
      cin >> x >> y;
      field[y][x] = true;
    }

    cout << getGroups(field) << '\n';
  }
}
