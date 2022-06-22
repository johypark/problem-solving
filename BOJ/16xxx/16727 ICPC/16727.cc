#include <iostream>

using namespace std;

int main() {
  int p1, s1, s2, p2;
  cin >> p1 >> s1 >> s2 >> p2;

  if (p1 + p2 == s1 + s2) {
    if (p2 == s1)
      cout << "Penalty" << endl;
    else
      cout << (p2 > s1 ? "Persepolis" : "Esteghlal") << endl;
  } else {
    cout << (p1 + p2 > s1 + s2 ? "Persepolis" : "Esteghlal") << endl;
  }
}
