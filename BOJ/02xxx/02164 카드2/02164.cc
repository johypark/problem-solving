#include <iostream>
#include <queue>

using namespace std;

int main() {
  int n;
  cin >> n;

  queue<int> cardQueue;
  for (int i = 1; i <= n; i++)
    cardQueue.push(i);

  while (cardQueue.size() > 1) {
    cardQueue.pop();
    cardQueue.push(cardQueue.front());
    cardQueue.pop();
  }

  cout << cardQueue.front() << endl;
}
