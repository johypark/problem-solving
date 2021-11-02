#include <iostream>
#include <vector>

using namespace std;

double getAverageSejun(const vector<int> &scores) {
  int sum = 0, max = 0;
  for (const int &score : scores) {
    if (max < score)
      max = score;
    sum += score;
  }

  double average = static_cast<double>(sum) / scores.size();
  return average / max * 100;
}

int main() {
  int n;
  cin >> n;

  vector<int> scores(n);
  for (int &score : scores)
    cin >> score;

  cout << getAverageSejun(scores) << endl;
}
