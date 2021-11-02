#include <algorithm>
#include <iostream>
#include <vector>

enum { LENGTH = 9 };

using namespace std;

int getMaxNumberIndex(vector<int> numbers) {
  return max_element(numbers.begin(), numbers.end()) - numbers.begin();
}

int main() {
  vector<int> numbers(LENGTH);
  for (int &number : numbers)
    cin >> number;

  int maxIndex = getMaxNumberIndex(numbers);
  cout << numbers[maxIndex] << '\n' << maxIndex + 1 << endl;
}
