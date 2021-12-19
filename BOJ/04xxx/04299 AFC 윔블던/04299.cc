#include <iostream>

using namespace std;

int main() {
  int sumScore, subScore;
  cin >> sumScore >> subScore;

  if ((sumScore + subScore) % 2 || (sumScore - subScore) < 0)
    cout << -1 << endl;
  else
    cout << (sumScore + subScore) / 2 << ' ' << (sumScore - subScore) / 2
         << endl;
}
