#include <iostream>
#include <vector>

using namespace std;

// DFS
void printPermutations(vector<int> &permutation, vector<bool> &isVisited,
                       size_t r) {
  if (permutation.size() == r) {
    for (const int &num : permutation)
      cout << num << ' ';
    cout << '\n';
  } else {
    for (size_t i = 1; i < isVisited.size(); i++) {
      if (!isVisited[i]) {
        permutation.push_back(i);
        isVisited[i] = true;
        printPermutations(permutation, isVisited, r);
        permutation.pop_back();
        isVisited[i] = false;
      }
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> permutation;
  permutation.reserve(m);
  vector<bool> isVisited(n + 1);
  printPermutations(permutation, isVisited, m);
}
