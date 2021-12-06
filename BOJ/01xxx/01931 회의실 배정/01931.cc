#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool compare(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.second == b.second)
    return a.first < b.first;

  return a.second < b.second;
}

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> meetings(n);
  for (auto &[meetStart, meetEnd] : meetings)
    cin >> meetStart >> meetEnd;

  sort(meetings.begin(), meetings.end(), compare);

  int endTime = 0;
  int count = 0;
  for (const auto &[meetStart, meetEnd] : meetings) {
    if (endTime <= meetStart) {
      count++;
      endTime = meetEnd;
    }
  }

  cout << count << endl;
}
