#include <iostream>
#include <vector>

enum { LENGTH = 8 };

using namespace std;

void printScaleOrder(const vector<int> &numbers) {
  bool isAscending = true;
  bool isDescending = true;

  for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] != i + 1)
      isAscending = false;
    if (numbers[i] != numbers.size() - i)
      isDescending = false;
  }

  if (isAscending)
    cout << "ascending";
  else if (isDescending)
    cout << "descending";
  else
    cout << "mixed";

  cout << endl;
}

int main() {
  vector<int> numbers(LENGTH);
  for (int &number : numbers)
    cin >> number;

  printScaleOrder(numbers);
}
