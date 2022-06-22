#include <iostream>

using namespace std;

int main() {
  int h, m, s;
  char ch;
  cin >> h >> ch >> m >> ch >> s;
  int startTime = h * 60 * 60 + m * 60 + s;

  cin >> h >> ch >> m >> ch >> s;
  int endTime = h * 60 * 60 + m * 60 + s;

  cout << (endTime - startTime + 24 * 60 * 60) % (24 * 60 * 60) << endl;
}
