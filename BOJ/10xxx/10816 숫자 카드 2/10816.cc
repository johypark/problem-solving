#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int card;
  unordered_map<int, int> cards;
  for (int i = 0; i < n; i++) {
    cin >> card;
    cards[card]++;
  }

  int m;
  cin >> m;

  for (int i = 0; i < m; i++) {
    cin >> card;
    cout << cards[card] << ' ';
  }
  cout << endl;
}
