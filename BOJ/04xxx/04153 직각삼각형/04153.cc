#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> edges(3);
  while (true) {
    for (int &edge : edges)
      cin >> edge;

    if (edges[0] == 0)
      break;

    sort(edges.begin(), edges.end());

    if (edges[0] * edges[0] + edges[1] * edges[1] == edges[2] * edges[2])
      cout << "right" << '\n';
    else
      cout << "wrong" << '\n';
  }
}
