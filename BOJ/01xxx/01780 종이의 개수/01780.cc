#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

tuple<int, int, int> operator+(const tuple<int, int, int> &a,
                               const tuple<int, int, int> &b) {
  return {get<0>(a) + get<0>(b), get<1>(a) + get<1>(b), get<2>(a) + get<2>(b)};
}

tuple<int, int, int> getPapersCounts(const vector<vector<int>> &paper, int size,
                                     int x = 0, int y = 0) {
  int front = paper[y][x];
  for (int i = y; i < y + size; i++) {
    for (int j = x; j < x + size; j++) {
      if (front != paper[i][j]) {
        tuple<int, int, int> papersCounts = {0, 0, 0};
        for (int n = 0; n < 3; n++) {
          for (int m = 0; m < 3; m++) {
            papersCounts = papersCounts + getPapersCounts(paper, size / 3,
                                                          x + size * m / 3,
                                                          y + size * n / 3);
          }
        }

        return papersCounts;
      }
    }
  }

  switch (front) {
  case -1:
    return {1, 0, 0};
  case 0:
    return {0, 1, 0};
  case 1:
    return {0, 0, 1};
  }

  return {0, 0, 0};
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<vector<int>> paper(n, vector<int>(n));
  for (auto &row : paper)
    for (int &num : row)
      cin >> num;

  tuple<int, int, int> papersCounts = getPapersCounts(paper, paper.size());
  cout << get<0>(papersCounts) << '\n'
       << get<1>(papersCounts) << '\n'
       << get<2>(papersCounts) << endl;
}
