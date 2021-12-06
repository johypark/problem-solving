#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair<int, string> &a, const pair<int, string> &b) {
  return a.first < b.first;
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, string>> people(n);
  for (auto &[age, name] : people)
    cin >> age >> name;

  stable_sort(people.begin(), people.end(), compare);

  for (const auto &[age, name] : people)
    cout << age << ' ' << name << '\n';
}
