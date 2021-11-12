#include <iostream>
#include <numeric>
#include <vector>

enum { PRECISION = 3 };

using namespace std;

double getAboveAverageRate(const vector<int> &scores) {
  double average =
      accumulate(scores.begin(), scores.end(), 0.0) / scores.size();

  int aboveAverageCount = 0;
  for (int score : scores)
    if (score > average)
      aboveAverageCount++;

  return static_cast<double>(aboveAverageCount) / scores.size();
}

int main() {
  int c;
  cin >> c;

  // Save cout flags
  ios_base::fmtflags flags(cout.flags());

  cout.precision(PRECISION);
  cout << fixed;

  int n;
  for (int i = 0; i < c; i++) {
    cin >> n;

    vector<int> scores(n);
    for (int &score : scores) {
      cin >> score;
    }

    cout << getAboveAverageRate(scores) * 100 << "%\n";
  }

  // Reset cout flags
  cout.flags(flags);
}
