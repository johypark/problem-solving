#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<pair<int, int>> people(n);
  for (auto &[weight, height] : people)
    cin >> weight >> height;

  for (const auto &[weight, height] : people) {
    int rank = 1;
    for (const auto &[targetWeight, targetHeight] : people)
      if (weight < targetWeight && height < targetHeight)
        rank++;

    cout << rank << ' ';
  }

  cout << endl;
}
