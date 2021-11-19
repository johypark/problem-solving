#include <algorithm>
#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int getSecondSmallestMode(vector<int> numbers) {
  int count = 1;
  int mode_count = 1;
  int mode = numbers[0];
  bool is_second = false;

  for (size_t i = 1; i < numbers.size(); i++) {
    if (numbers[i] == numbers[i - 1])
      count++;
    else
      count = 1;

    if (mode_count < count) {
      // New mode
      mode = numbers[i];
      mode_count = count;
      is_second = false;
    } else if (mode_count == count && !is_second) {
      // Second smallest mode
      mode = numbers[i];
      is_second = true;
    }
  }

  return mode;
}

int main() {
  int n;
  cin >> n;

  vector<int> numbers(n);
  for (int &number : numbers)
    cin >> number;

  sort(numbers.begin(), numbers.end());

  int average =
      round(accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size());
  int median = numbers[numbers.size() / 2];
  int secondSmallestMode = getSecondSmallestMode(numbers);
  int range = *(numbers.end() - 1) - *numbers.begin();

  cout << average << '\n'
       << median << '\n'
       << secondSmallestMode << '\n'
       << range << endl;
}
