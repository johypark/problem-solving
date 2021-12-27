#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getProduct(const vector<int> &factors) {
  auto [minIt, maxIt] = minmax_element(factors.begin(), factors.end());

  return *minIt * *maxIt;
}

int main() {
  int factorCount;
  cin >> factorCount;

  vector<int> factors(factorCount);
  for (int &factor : factors)
    cin >> factor;

  cout << getProduct(factors) << endl;
}
