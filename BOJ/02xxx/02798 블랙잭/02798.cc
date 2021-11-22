#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> cards(n);
  for (int &card : cards)
    cin >> card;

  int sum;
  int largestSum = 0;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        sum = cards[i] + cards[j] + cards[k];
        if (sum <= m && largestSum < sum)
          largestSum = sum;
      }
    }
  }

  cout << largestSum << endl;
}
