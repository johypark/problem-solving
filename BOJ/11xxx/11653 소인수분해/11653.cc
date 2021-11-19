#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int sqrtN = sqrt(n);
  int factor = n;
  for (int i = 2; i <= sqrtN; i++) {
    while (factor % i == 0) {
      cout << i << '\n';
      factor /= i;
    }
  }

  if (factor > 1)
    cout << factor << endl;
}
