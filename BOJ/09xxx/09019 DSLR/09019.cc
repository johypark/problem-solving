#include <array>
#include <iostream>
#include <queue>

using namespace std;

string getShortestCommand(int a, int b) {
  queue<pair<int, string>> q;
  q.push({a, ""});

  array<bool, 10000> isVisited = {false};
  isVisited[a] = true;

  int d, l, s, r;
  while (!q.empty()) {
    auto [n, command] = q.front();
    if (n == b)
      return command;

    d = n * 2 % 10000;
    if (!isVisited[d]) {
      isVisited[d] = true;
      q.push({d, command + 'D'});
    }

    s = (n + 10000 - 1) % 10000;
    if (!isVisited[s]) {
      isVisited[s] = true;
      q.push({s, command + 'S'});
    }

    l = n % 1000 * 10 + n / 1000;
    if (!isVisited[l]) {
      isVisited[l] = true;
      q.push({l, command + 'L'});
    }

    r = n % 10 * 1000 + n / 10;
    if (!isVisited[r]) {
      isVisited[r] = true;
      q.push({r, command + 'R'});
    }

    q.pop();
  }

  return "ERROR";
}

int main() {
  int t;
  cin >> t;

  int a, b;
  for (int i = 0; i < t; i++) {
    cin >> a >> b;

    cout << getShortestCommand(a, b) << '\n';
  }
}
