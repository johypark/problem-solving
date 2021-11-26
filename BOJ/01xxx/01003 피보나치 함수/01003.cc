#include <iostream>
#include <vector>

enum { MAX_NUM = 40 };

using namespace std;

vector<int> getFibonacciSequence(int maxNum) {
  vector<int> fibonacciSequence(maxNum + 1);
  fibonacciSequence[0] = 0;
  fibonacciSequence[1] = 1;
  for (size_t i = 2; i < fibonacciSequence.size(); i++)
    fibonacciSequence[i] = fibonacciSequence[i - 2] + fibonacciSequence[i - 1];

  return fibonacciSequence;
}

int main() {
  int t;
  cin >> t;

  int n;
  int count0, count1;
  vector<int> fibonacciSequence = getFibonacciSequence(MAX_NUM);
  for (int i = 0; i < t; i++) {
    cin >> n;

    count0 = n ? fibonacciSequence[n - 1] : 1;
    count1 = fibonacciSequence[n];

    cout << count0 << ' ' << count1 << '\n';
  }
}
