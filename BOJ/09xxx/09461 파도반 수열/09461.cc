#include <iostream>
#include <vector>

enum { MAX_NUM = 100 };

using namespace std;

vector<long long> getPadovanSequence(int n) {
  vector<long long> padovanSequence(n + 1);
  padovanSequence[0] = 0;
  padovanSequence[1] = 1;
  padovanSequence[2] = 1;
  padovanSequence[3] = 1;
  padovanSequence[4] = 2;
  for (size_t i = 5; i < padovanSequence.size(); i++)
    padovanSequence[i] = padovanSequence[i - 5] + padovanSequence[i - 1];

  return padovanSequence;
}

int main() {
  int t;
  cin >> t;

  int n;
  vector<long long> padovanSequence = getPadovanSequence(MAX_NUM);
  for (int i = 0; i < t; i++) {
    cin >> n;

    cout << padovanSequence[n] << '\n';
  }
}
