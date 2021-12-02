#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

// DFS
void nQueen(vector<int> &queens, vector<bool> &isVisited, int &count) {
  if (queens.size() == isVisited.size()) {
    count++;
  } else {
    for (size_t i = 0; i < isVisited.size(); i++) {
      if (!isVisited[i]) {
        // Check if queen is diagonal with the other queens
        int dx, dy;
        bool isDiagonal = false;
        for (size_t j = 0; j < queens.size(); j++) {
          dx = i - queens[j];
          dy = queens.size() - j;
          if (abs(dx) == dy) {
            isDiagonal = true;
            break;
          }
        }

        // Push if queen is not diagonal
        if (!isDiagonal) {
          queens.push_back(i);
          isVisited[i] = true;
          nQueen(queens, isVisited, count);
          queens.pop_back();
          isVisited[i] = false;
        }
      }
    }
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> queens;
  queens.reserve(n);
  vector<bool> isVisited(n);
  int count = 0;
  nQueen(queens, isVisited, count);

  cout << count << endl;
}
