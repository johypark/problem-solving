#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  vector<int> coins(n);
  for (int &coin : coins)
    cin >> coin;

  int balance = k;
  int count = 0;
  for (int i = coins.size() - 1; i >= 0; i--) {
    count += balance / coins[i];
    balance %= coins[i];
  }

  cout << count << endl;
}
