#include <iostream>
#include <vector>

using namespace std;

// DFS
void printSequences(vector<int> &sequence, size_t n, size_t r) {
  if (sequence.size() == r) {
    for (const int &num : sequence)
      cout << num << ' ';
    cout << '\n';
  } else {
    for (size_t i = 1; i <= n; i++) {
      sequence.push_back(i);
      printSequences(sequence, n, r);
      sequence.pop_back();
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> sequence;
  sequence.reserve(m);
  printSequences(sequence, n, m);
}
