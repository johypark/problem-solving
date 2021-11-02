#include <iostream>

using namespace std;

char getGrade(int score) {
  if (score >= 90)
    return 'A';
  if (score >= 80)
    return 'B';
  if (score >= 70)
    return 'C';
  if (score >= 60)
    return 'D';

  return 'F';
}

int main(int argc, char *argv[]) {
  int score;

  cin >> score;

  cout << getGrade(score);
}
