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

vector<vector<int>> operator%(const vector<vector<int>> &a, int b) {
  vector<vector<int>> result(a);
  for (auto &row : result)
    for (int &element : row)
      element %= b;

  return result;
}

vector<vector<int>> pow(const vector<vector<int>> &a, long long b) {
  const int MODULAR = 1000;
  if (b == 1)
    return a % MODULAR;
  if (b % 2)
    return pow(a * a % MODULAR, b / 2) * a % MODULAR;

  return pow(a * a % MODULAR, b / 2);
}

int main() {
  int n;
  long long b;
  cin >> n >> b;

  vector<vector<int>> a(n, vector<int>(n));
  for (auto &row : a)
    for (int &element : row)
      cin >> element;

  vector<vector<int>> result = pow(a, b);
  for (const auto &row : result) {
    for (const int &element : row) {
      cout << element << ' ';
    }
    cout << '\n';
  }
}
