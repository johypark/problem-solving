#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> sequence(n);
  for (int &num : sequence)
    cin >> num;

  int maxSum = sequence.front();
  int sum = 0;
  for (const int &num : sequence) {
    sum += num;
    maxSum = max(maxSum, sum);

    if (sum < 0)
      sum = 0;
  }

  cout << maxSum << endl;
}
