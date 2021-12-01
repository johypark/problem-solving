#include <iostream>
#include <vector>

using namespace std;

// DFS
void printCombinations(vector<int> &combination, size_t n, size_t r) {
  if (combination.size() == r) {
    for (const int &num : combination)
      cout << num << ' ';
    cout << '\n';
  } else {
    int back = combination.empty() ? 0 : combination.back();
    for (size_t i = back + 1; i <= n; i++) {
      combination.push_back(i);
      printCombinations(combination, n, r);
      combination.pop_back();
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> combination;
  combination.reserve(m);
  printCombinations(combination, n, m);
}
