#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> getJosephusPermutation(int n, int k) {
  queue<int> intQueue;
  for (int i = 1; i <= n; i++)
    intQueue.push(i);

  vector<int> josephusPermutation;
  josephusPermutation.reserve(n);
  while (!intQueue.empty()) {
    for (int i = 1; i < k; i++) {
      intQueue.push(intQueue.front());
      intQueue.pop();
    }

    josephusPermutation.push_back(intQueue.front());
    intQueue.pop();
  }

  return josephusPermutation;
}

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> josephusPermutation = getJosephusPermutation(n, k);
  cout << '<' << josephusPermutation[0];
  for (size_t i = 1; i < josephusPermutation.size(); i++)
    cout << ", " << josephusPermutation[i];
  cout << '>' << endl;
}
