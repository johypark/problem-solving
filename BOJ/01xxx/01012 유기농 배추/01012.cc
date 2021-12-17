#include <iostream>
#include <vector>

using namespace std;

void visitGroup(const vector<vector<bool>> &field,
                vector<vector<bool>> &isVisited, size_t x, size_t y) {
  if (!field[y][x] || isVisited[y][x])
    return;

  isVisited[y][x] = true;

  if (x > 0)
    visitGroup(field, isVisited, x - 1, y);
  if (x < field.front().size() - 1)
    visitGroup(field, isVisited, x + 1, y);
  if (y > 0)
    visitGroup(field, isVisited, x, y - 1);
  if (y < field.size() - 1)
    visitGroup(field, isVisited, x, y + 1);
}

int getGroups(const vector<vector<bool>> &field) {
  vector<vector<bool>> isVisited(field.size(),
                                 vector<bool>(field.front().size()));
  int count = 0;
  for (size_t i = 0; i < field.size(); i++) {
    for (size_t j = 0; j < field.front().size(); j++) {
      if (field[i][j] && !isVisited[i][j]) {
        visitGroup(field, isVisited, j, i);
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
