#include <algorithm>
#include <iostream>

using namespace std;

int getNumSangsu(int n) { return n / 100 + n / 10 % 10 * 10 + n % 10 * 100; }

int getAnswerSangsu(int a, int b) {
  int aSangsu = getNumSangsu(a);
  int bSangsu = getNumSangsu(b);

  return max(aSangsu, bSangsu);
}

int main() {
  int a, b;
  cin >> a >> b;

  cout << getAnswerSangsu(a, b) << endl;
}
