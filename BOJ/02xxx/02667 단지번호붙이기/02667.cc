#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getApartment(const vector<vector<bool>> &complex,
                 vector<vector<bool>> &isVisited, size_t x, size_t y) {
  if (!complex[y][x] || isVisited[y][x])
    return 0;

  isVisited[y][x] = true;

  int count = 0;
  if (x > 0)
    count += getApartment(complex, isVisited, x - 1, y);
  if (x < complex.front().size() - 1)
    count += getApartment(complex, isVisited, x + 1, y);
  if (y > 0)
    count += getApartment(complex, isVisited, x, y - 1);
  if (y < complex.size() - 1)
    count += getApartment(complex, isVisited, x, y + 1);

  return count + 1;
}

vector<int> getApartments(const vector<vector<bool>> &complex) {
  vector<vector<bool>> isVisited(complex.size(),
                                 vector<bool>(complex.front().size()));
  vector<int> apartments;
  for (size_t i = 0; i < complex.size(); i++)
    for (size_t j = 0; j < complex.front().size(); j++)
      if (complex[i][j] && !isVisited[i][j])
        apartments.push_back(getApartment(complex, isVisited, j, i));

  return apartments;
}

int main() {
  int n;
  cin >> n;

  char input;
  vector<vector<bool>> complex(n, vector<bool>(n));
  for (size_t i = 0; i < complex.size(); i++) {
    for (size_t j = 0; j < complex.front().size(); j++) {
      cin >> input;
      complex[i][j] = atoi(&input);
    }
  }

  vector<int> apartments = getApartments(complex);
  sort(apartments.begin(), apartments.end());

  cout << apartments.size() << '\n';
  for (const int &apartment : apartments)
    cout << apartment << '\n';
}
