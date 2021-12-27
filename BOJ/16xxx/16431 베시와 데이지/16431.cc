#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int br, bc, dr, dc, jr, jc;
  cin >> br >> bc >> dr >> dc >> jr >> jc;

  int bessie = max(abs(jr - br), abs(jc - bc));
  int daisy = abs(jr - dr) + abs(jc - dc);
  if (bessie < daisy)
    cout << "bessie" << endl;
  else if (bessie > daisy)
    cout << "daisy" << endl;
  else
    cout << "tie" << endl;
}
