#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getMaxIncreasingSequenceLength(const vector<int> &sequence) {
  int maxLength;
  vector<int> lengths(sequence.size());
  int maxSequenceLength = 0;
  for (size_t i = 0; i < sequence.size(); i++) {
    maxLength = 0;
    for (size_t j = 0; j < i; j++)
      if (sequence[j] < sequence[i])
        maxLength = max(maxLength, lengths[j]);

    lengths[i] = maxLength + 1;
    maxSequenceLength = max(maxSequenceLength, lengths[i]);
  }

  return maxSequenceLength;
}

int main() {
  int n;
  cin >> n;

  vector<int> sequence(n);
  for (int &num : sequence)
    cin >> num;

  cout << getMaxIncreasingSequenceLength(sequence) << endl;
}
