#include <array>
#include <iostream>

enum { MAX_NUM = 10 };

using namespace std;

array<int, MAX_NUM + 1> getSumCasesCounts() {
  array<int, MAX_NUM + 1> counts{1, 1, 2};
  for (size_t i = 3; i < counts.size(); i++)
    counts[i] = counts[i - 1] + counts[i - 2] + counts[i - 3];

  return counts;
}

int main() {
  int t;
  cin >> t;

  int n;
  array<int, MAX_NUM + 1> sumCasesCounts = getSumCasesCounts();
  for (int i = 0; i < t; i++) {
    cin >> n;

    cout << sumCasesCounts[n] << '\n';
  }
}
