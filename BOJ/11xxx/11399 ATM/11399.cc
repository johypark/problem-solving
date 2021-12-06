#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> people(n);
  for (int &person : people)
    cin >> person;

  sort(people.begin(), people.end(), greater());

  int sum = 0;
  for (size_t i = 0; i < people.size(); i++)
    sum += people[i] * (i + 1);

  cout << sum << endl;
}
