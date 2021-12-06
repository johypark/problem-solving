#include <iostream>

using namespace std;

int main() {
  int beer, malt, wine, soda, seltzer, water;
  cin >> beer >> malt >> wine >> soda >> seltzer >> water;

  cout << (beer + malt + wine + soda + seltzer + water) * 5 << endl;
}
