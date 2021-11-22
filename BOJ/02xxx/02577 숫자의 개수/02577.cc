#include <iostream>
#include <vector>

enum { BASE = 10 };

using namespace std;

vector<int> getNumsUsed(int num) {
  vector<int> numsUsed(BASE);

  while (num > 0) {
    numsUsed[num % BASE]++;
    num /= BASE;
  }

  return numsUsed;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> numsUsed = getNumsUsed(a * b * c);
  for (const int &num : numsUsed)
    cout << num << '\n';
}
