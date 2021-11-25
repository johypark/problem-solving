#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> cards(n);
  for (int &card : cards)
    cin >> card;

  sort(cards.begin(), cards.end());

  int m;
  cin >> m;

  int card;
  int count;
  for (int i = 0; i < m; i++) {
    cin >> card;

    count = upper_bound(cards.begin(), cards.end(), card) -
            lower_bound(cards.begin(), cards.end(), card);

    cout << count << ' ';
  }

  cout << endl;
}
