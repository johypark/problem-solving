#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int i = 0;
  int maxNum = 1;
  int count = 0;
  while (true) {
    count++;

    if (n <= maxNum)
      break;

    maxNum += ++i * 6;
  }

  cout << count << endl;
}
