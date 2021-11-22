#include <iostream>

using namespace std;

int getNumSangsu(int n) { return n / 100 + n / 10 % 10 * 10 + n % 10 * 100; }

int getAnswerSangsu(int a, int b) {
  int a_sangsu = getNumSangsu(a);
  int b_sangsu = getNumSangsu(b);

  return a_sangsu > b_sangsu ? a_sangsu : b_sangsu;
}

int main() {
  int a, b;
  cin >> a >> b;

  cout << getAnswerSangsu(a, b) << endl;
}
