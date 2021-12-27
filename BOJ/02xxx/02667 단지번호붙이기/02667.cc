#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getApartment(const vector<vector<bool>> &complex,
                 const vector<pair<int, int>> &directions,
                 vector<vector<bool>> &isVisited, size_t x, size_t y) {
  isVisited[y][x] = true;

  size_t nx, ny;
  int count = 0;
  for (size_t i = 0; i < directions.size(); i++) {
    nx = x + directions[i].first;
    ny = y + directions[i].second;
    if (nx < complex.front().size() && ny < complex.size() && complex[ny][nx] &&
        !isVisited[ny][nx])
      count += getApartment(complex, directions, isVisited, nx, ny);
  }

  return count + 1;
}

vector<int> getApartments(const vector<vector<bool>> &complex) {
  const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

  vector<vector<bool>> isVisited(complex.size(),
                                 vector<bool>(complex.front().size()));
  vector<int> apartments;
  for (size_t i = 0; i < complex.size(); i++)
    for (size_t j = 0; j < complex.front().size(); j++)
      if (complex[i][j] && !isVisited[i][j])
        apartments.push_back(
            getApartment(complex, directions, isVisited, j, i));

  return apartments;
}

int main() {
  int n;
  cin >> n;

  string input;
  vector<vector<bool>> complex(n, vector<bool>(n));
  for (auto &row : complex) {
    cin >> input;
    for (size_t i = 0; i < row.size(); i++)
      row[i] = input[i] - '0';
  }

  vector<int> apartments = getApartments(complex);
  sort(apartments.begin(), apartments.end());

  cout << apartments.size() << '\n';
  for (const int &apartment : apartments)
    cout << apartment << '\n';
}
