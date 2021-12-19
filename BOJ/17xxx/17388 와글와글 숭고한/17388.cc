#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  int s, k, h;
  cin >> s >> k >> h;

  if (s + k + h >= 100) {
    cout << "OK" << endl;
  } else {
    int worst = min({s, k, h});
    if (worst == s)
      cout << "Soongsil" << endl;
    else if (worst == k)
      cout << "Korea" << endl;
    else
      cout << "Hanyang" << endl;
  }
}
