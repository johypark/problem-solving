#include <iostream>
#include <vector>

using namespace std;

pair<int, int> operator+(const pair<int, int> &a, const pair<int, int> &b) {
  return {a.first + b.first, a.second + b.second};
}

pair<int, int> getPapersCounts(const vector<vector<bool>> &paper, int size,
                               int x = 0, int y = 0) {
  bool hasBlue = false;
  bool hasWhite = false;
  for (int i = y; i < y + size; i++)
    for (int j = x; j < x + size; j++)
      paper[i][j] ? hasBlue = true : hasWhite = true;

  if (hasBlue && hasWhite)
    return getPapersCounts(paper, size / 2, x, y) +
           getPapersCounts(paper, size / 2, x + size / 2, y) +
           getPapersCounts(paper, size / 2, x, y + size / 2) +
           getPapersCounts(paper, size / 2, x + size / 2, y + size / 2);

  return {hasBlue, hasWhite};
}

int main() {
  int n;
  cin >> n;

  vector<vector<bool>> paper(n, vector<bool>(n));
  int input;
  for (size_t i = 0; i < paper.size(); i++) {
    for (size_t j = 0; j < paper.front().size(); j++) {
      cin >> input;
      paper[i][j] = input;
    }
  }

  auto [blueCount, whiteCount] = getPapersCounts(paper, paper.size());
  cout << whiteCount << '\n' << blueCount << endl;
}
