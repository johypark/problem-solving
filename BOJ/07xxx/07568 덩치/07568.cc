#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> people(n);
  for (auto &person : people)
    cin >> person.first >> person.second;

  for (auto &person : people) {
    int rank = 1;
    for (auto &target : people) {
      if (person.first < target.first && person.second < target.second) {
        rank++;
      }
    }

    cout << rank << ' ';
  }

  cout << endl;
}
