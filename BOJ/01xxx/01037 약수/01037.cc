#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getProduct(const vector<int> &factors) {
  int min = *min_element(factors.begin(), factors.end());
  int max = *max_element(factors.begin(), factors.end());

  return min * max;
}

int main() {
  int factorCount;
  cin >> factorCount;

  vector<int> factors(factorCount);
  for (int &factor : factors)
    cin >> factor;

  cout << getProduct(factors) << endl;
}
