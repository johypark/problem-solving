#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int getLISLength(const vector<int> &sequence) {
  vector<int> elements(1, sequence.front());
  elements.reserve(sequence.size());
  for (const int &element : sequence) {
    if (elements.back() < element)
      elements.push_back(element);
    else if (elements.back() > element)
      *lower_bound(elements.begin(), elements.end(), element) = element;
  }

  return elements.size();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> sequence(n);
  for (int &num : sequence)
    cin >> num;

  cout << getLISLength(sequence) << endl;
}
