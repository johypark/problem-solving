#include <deque>
#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  deque<int> intDeque;
  for (int i = 1; i <= n; i++)
    intDeque.push_back(i);

  int num;
  int count = 0;
  for (int i = 0; i < m; i++) {
    cin >> num;

    size_t index = 0;
    while (intDeque[index] != num)
      index++;

    if (index <= intDeque.size() - index) {
      while (intDeque.front() != num) {
        intDeque.push_back(intDeque.front());
        intDeque.pop_front();
        count++;
      }
    } else {
      while (intDeque.front() != num) {
        intDeque.push_front(intDeque.back());
        intDeque.pop_back();
        count++;
      }
    }

    intDeque.pop_front();
  }

  cout << count << endl;
}
