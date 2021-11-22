#include <array>
#include <iostream>

enum { MAX_NUM = 10000 };

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int num;
  array<int, MAX_NUM + 1> counts = {0};
  for (int i = 0; i < n; i++) {
    cin >> num;
    counts[num]++;
  }

  int count;
  for (int i = 1; i <= MAX_NUM; i++) {
    count = counts[i];
    for (int j = 0; j < count; j++) {
      cout << i << '\n';
    }
  }
}
