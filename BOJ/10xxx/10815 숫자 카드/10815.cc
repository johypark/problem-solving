#include <iostream>
#include <set>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int card;
  set<int> cards;
  for (int i = 0; i < n; i++) {
    cin >> card;
    cards.insert(card);
  }

  int m;
  cin >> m;

  for (int i = 0; i < m; i++) {
    cin >> card;
    cout << (cards.find(card) != cards.end()) << ' ';
  }
  cout << endl;
}
