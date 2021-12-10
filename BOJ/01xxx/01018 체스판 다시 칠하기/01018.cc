#include <iostream>
#include <vector>

enum { BLACK = 'B', WHITE = 'W' };

using namespace std;

// Get minimum repaint count on 8x8 chessboard starting at board(x, y)
int getMinChessboardRepaintCount(const vector<vector<bool>> &board, int x,
                                 int y) {
  const int CHESSBOARD_SIZE = 8;
  int count = 0;
  bool color = false;

  for (int i = 0; i < CHESSBOARD_SIZE; i++) {
    for (int j = 0; j < CHESSBOARD_SIZE; j++) {
      if (board[i + y][j + x] != color)
        count++;
      color = !color;
    }

    if (CHESSBOARD_SIZE % 2 == 0)
      color = !color;
  }

  // Check if the count is minimum
  if (count > 32)
    count = 64 - count;

  return count;
}

// Get minimum repaint count on board to make chessboard
int getMinRepaintCount(const vector<vector<bool>> &board) {
  const int CHESSBOARD_SIZE = 8;
  int width = board.front().size();
  int height = board.size();
  int count = CHESSBOARD_SIZE * CHESSBOARD_SIZE;
  int chessboard_repaint_count;

  for (int y = 0; y <= height - 8; y++)
    for (int x = 0; x <= width - 8; x++) {
      chessboard_repaint_count = getMinChessboardRepaintCount(board, x, y);
      if (count > chessboard_repaint_count)
        count = chessboard_repaint_count;
    }

  return count;
}

int main() {
  int n, m;
  cin >> n >> m;

  // Initialize board
  vector<vector<bool>> board(n, vector<bool>(m));
  string colors;
  for (int i = 0; i < n; i++) {
    cin >> colors;
    for (int j = 0; j < m; j++)
      board[i][j] = colors[j] == WHITE;
  }

  cout << getMinRepaintCount(board) << endl;
}
