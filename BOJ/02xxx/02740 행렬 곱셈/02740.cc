#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> operator*(const vector<vector<int>> &a,
                              const vector<vector<int>> &b) {
  vector<vector<int>> result(a.size(), vector<int>(b.front().size()));
  for (size_t i = 0; i < result.size(); i++)
    for (size_t j = 0; j < result.front().size(); j++)
      for (size_t k = 0; k < a.front().size(); k++)
        result[i][j] += a[i][k] * b[k][j];

  return result;
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> a(n, vector<int>(m));
  for (auto &row : a)
    for (int &element : row)
      cin >> element;

  int k;
  cin >> m >> k;

  vector<vector<int>> b(m, vector<int>(k));
  for (auto &row : b)
    for (int &element : row)
      cin >> element;

  vector<vector<int>> c = a * b;
  for (const auto &row : c) {
    for (const int &element : row) {
      cout << element << ' ';
    }
    cout << '\n';
  }
}
