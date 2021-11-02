#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> numbers(n);
  for (int &number : numbers)
    cin >> number;

  cout << *min_element(numbers.begin(), numbers.end()) << ' '
       << *max_element(numbers.begin(), numbers.end()) << endl;
}
