#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int a, b, v;
  cin >> a >> b >> v;

  // day >= (v - b) / (a - b)
  int day = ceil(static_cast<double>(v - b) / (a - b));
  cout << day << endl;
}
