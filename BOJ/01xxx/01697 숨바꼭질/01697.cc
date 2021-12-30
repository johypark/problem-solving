#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int getMinFindTime(int n, int k) {
  const vector<int> directions = {-1, 1};

  queue<pair<int, int>> q;
  q.push({n, 0});

  int maxPoint = max(n, k) + 1;
  vector<bool> isVisited(maxPoint + 1);
  isVisited[n] = true;

  while (!q.empty()) {
    auto [x, time] = q.front();
    if (x == k)
      return time;

    size_t nx;
    for (const int &direction : directions) {
      nx = x + direction;
      if (nx < isVisited.size() && !isVisited[nx]) {
        isVisited[nx] = true;
        q.push({nx, time + 1});
      }
    }

    nx = x * 2;
    if (nx < isVisited.size() && !isVisited[nx]) {
      isVisited[nx] = true;
      q.push({nx, time + 1});
    }

    q.pop();
  }

  return -1;
}

int main() {
  int n, k;
  cin >> n >> k;

  cout << getMinFindTime(n, k) << endl;
}
