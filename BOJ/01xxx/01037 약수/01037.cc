#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getProduct(const vector<int> &factors) {
  int minFactor = *min_element(factors.begin(), factors.end());
  int maxFactor = *max_element(factors.begin(), factors.end());

  return minFactor * maxFactor;
}

int main() {
  int factorCount;
  cin >> factorCount;

  vector<int> factors(factorCount);
  for (int &factor : factors)
    cin >> factor;

  cout << getProduct(factors) << endl;
}
