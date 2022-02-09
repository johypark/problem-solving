#include <iostream>

using namespace std;

enum { STARTING_TIME = 11 * 24 * 60 + 11 * 60 + 11 };

int main() {
  int d, h, m;
  cin >> d >> h >> m;

  int endingTime = d * 24 * 60 + h * 60 + m;
  cout << (STARTING_TIME <= endingTime ? endingTime - STARTING_TIME : -1)
       << endl;
}
