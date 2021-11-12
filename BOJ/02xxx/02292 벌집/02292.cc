#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int i = 0;
  int max = 1;
  int count = 0;
  while (true) {
    count++;

    if (n <= max)
      break;

    max += ++i * 6;
  }

  cout << count << endl;
}
