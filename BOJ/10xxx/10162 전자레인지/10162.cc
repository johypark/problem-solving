#include <iostream>

enum { A = 5 * 60, B = 1 * 60, C = 10 };

using namespace std;

int main() {
  int t;
  cin >> t;

  int sec = t;
  int countA = 0;
  countA += sec / A;
  sec %= A;

  int countB = 0;
  countB += sec / B;
  sec %= B;

  int countC = 0;
  countC += sec / C;
  sec %= C;

  if (sec)
    cout << -1 << endl;
  else
    cout << countA << ' ' << countB << ' ' << countC << endl;
}
