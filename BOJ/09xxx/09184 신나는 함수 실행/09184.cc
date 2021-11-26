#include <iostream>
#include <vector>

using namespace std;

vector<vector<vector<int>>> getW() {
  vector<vector<vector<int>>> w(21, vector<vector<int>>(21, vector<int>(21)));
  for (int a = 0; a < 21; a++) {
    for (int b = 0; b < 21; b++) {
      for (int c = 0; c < 21; c++) {
        if (a == 0 || b == 0 || c == 0)
          w[a][b][c] = 1;
        else if (a < b && b < c)
          w[a][b][c] = w[a][b][c - 1] + w[a][b - 1][c - 1] - w[a][b - 1][c];
        else
          w[a][b][c] = w[a - 1][b][c] + w[a - 1][b - 1][c] +
                       w[a - 1][b][c - 1] - w[a - 1][b - 1][c - 1];
      }
    }
  }

  return w;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, c;
  int answer;
  vector<vector<vector<int>>> w = getW();
  while (true) {
    cin >> a >> b >> c;

    if (a == -1 && b == -1 && c == -1)
      break;

    if (a <= 0 || b <= 0 || c <= 0)
      answer = 1;
    else if (a > 20 || b > 20 || c > 20)
      answer = w[20][20][20];
    else
      answer = w[a][b][c];

    cout << "w(" << a << ", " << b << ", " << c << ") = " << answer << '\n';
  }
}
