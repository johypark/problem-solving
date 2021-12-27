#include <algorithm>
#include <iostream>

using namespace std;

// Lower bound
int b(int n, int k) {
  int low = 1;
  int high = k + 1;
  int mid, index;
  while (low < high) {
    mid = low + (high - low) / 2;
    index = 0;
    for (int i = 1; i <= n; i++)
      index += min(n, mid / i);

    if (index >= k)
      high = mid;
    else
      low = mid + 1;
  }

  return low;
}

int main() {
  int n, k;
  cin >> n >> k;

  cout << b(n, k) << endl;
}
