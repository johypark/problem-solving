#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

enum { BLACK = 'B', WHITE = 'W' };

// Get minimum repaint count on 8x8 chessboard starting at board(x, y)
int get_min_chessboard_repaint_count(bool **board, int x, int y) {
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

  // Check if count is minimum
  if (count > 32)
    count = 64 - count;

  return count;
}

// Get minimum repaint count on board to make chessboard
int get_min_repaint_count(bool **board, int width, int height) {
  const int CHESSBOARD_SIZE = 8;
  int count = CHESSBOARD_SIZE * CHESSBOARD_SIZE;
  int chessboard_repaint_count;

  for (int y = 0; y <= height - CHESSBOARD_SIZE; y++) {
    for (int x = 0; x <= width - CHESSBOARD_SIZE; x++) {
      chessboard_repaint_count = get_min_chessboard_repaint_count(board, x, y);
      if (count > chessboard_repaint_count)
        count = chessboard_repaint_count;
    }
  }

  return count;
}

int main(void) {
  int n, m;
  scanf("%d%d", &n, &m);

  // Initialize board
  bool **board = malloc(sizeof(bool *) * n);
  char color;
  for (int i = 0; i < n; i++) {
    board[i] = malloc(sizeof(bool) * m);
    for (int j = 0; j < m; j++) {
      scanf(" %c", &color);
      board[i][j] = color == WHITE;
    }
  }

  printf("%d\n", get_min_repaint_count(board, m, n));

  // Free
  for (int i = 0; i < n; i++)
    free(board[i]);
  free(board);
}
