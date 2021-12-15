#include <iostream>
#include <vector>

using namespace std;

vector<vector<long long>> operator*(const vector<vector<long long>> &a,
                                    const vector<vector<long long>> &b) {
  vector<vector<long long>> result(a.size(),
                                   vector<long long>(b.front().size()));
  for (size_t i = 0; i < result.size(); i++)
    for (size_t j = 0; j < result.front().size(); j++)
      for (size_t k = 0; k < a.front().size(); k++)
        result[i][j] += a[i][k] * b[k][j];

  return result;
}

vector<vector<long long>> operator%(const vector<vector<long long>> &a, int b) {
  vector<vector<long long>> result(a);
  for (auto &row : result)
    for (long long &element : row)
      element %= b;

  return result;
}

vector<vector<long long>> pow(const vector<vector<long long>> &a, long long b) {
  const int MODULAR = 1000000007;
  if (b == 1)
    return a % MODULAR;
  if (b % 2)
    return pow(a * a % MODULAR, b / 2) * a % MODULAR;

  return pow(a * a % MODULAR, b / 2);
}

int fibonacci(long long n) {
  vector<vector<long long>> result = {{0, 1}};
  vector<vector<long long>> mul = {{0, 1}, {1, 1}};
  result = result * pow(mul, n);

  return result.front().front();
}

int main() {
  long long n;
  cin >> n;

  cout << fibonacci(n) << endl;
}
