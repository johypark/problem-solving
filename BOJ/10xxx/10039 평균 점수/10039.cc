#include <array>
#include <iostream>
#include <numeric>

using namespace std;

int main() {
  array<int, 5> scores;
  for (int &score : scores) {
    cin >> score;
    if (score < 40) {
      score = 40;
    }
  }

  cout << reduce(scores.begin(), scores.end()) / scores.size() << endl;
}
