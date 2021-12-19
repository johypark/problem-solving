#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int result = (n - 1) % 8 + 1;
  if (result > 5)
    result = 10 - result;

  cout << result << endl;
}
