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
  for (auto &meeting : meetings)
    cin >> meeting.first >> meeting.second;

  sort(meetings.begin(), meetings.end(), compare);

  int end = 0;
  int count = 0;
  for (const auto &meeting : meetings) {
    if (end <= meeting.first) {
      count++;
      end = meeting.second;
    }
  }

  cout << count << endl;
}
