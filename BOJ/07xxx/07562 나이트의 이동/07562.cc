#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

int getMinMoveCount(int l, const pair<int, int> &startPos,
                    const pair<int, int> &endPos) {
  const vector<pair<int, int>> directions = {
      {-2, -1}, {-2, 1}, {-1, -2}, {-1, 2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}};

  queue<tuple<int, int, int>> q;
  q.push({startPos.first, startPos.second, 0});

  vector<vector<bool>> isVisited(l, vector<bool>(l));
  while (!q.empty()) {
    auto [x, y, count] = q.front();
    if (x == endPos.first && y == endPos.second)
      return count;

    int nx, ny;
    for (const auto &direction : directions) {
      nx = x + direction.first;
      ny = y + direction.second;
      if (nx >= 0 && nx < l && ny >= 0 && ny < l && !isVisited[ny][nx]) {
        isVisited[ny][nx] = true;
        q.push({nx, ny, count + 1});
      }
    }

    q.pop();
  }

  return -1;
}

int main() {
  int t;
  cin >> t;

  int l;
  pair<int, int> startPos, endPos;
  for (int i = 0; i < t; i++) {
    cin >> l;
    cin >> startPos.first >> startPos.second >> endPos.first >> endPos.second;

    cout << getMinMoveCount(l, startPos, endPos) << '\n';
  }
}
