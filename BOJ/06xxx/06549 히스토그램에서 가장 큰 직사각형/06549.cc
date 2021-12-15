#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  while (true) {
    cin >> n;

    if (n == 0)
      break;

    vector<int> h(n);
    for (int &height : h)
      cin >> height;
  }
}
