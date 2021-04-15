// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

enum { BLACK = 'B', WHITE = 'W' };

// Get minimum repaint count on 8x8 board starting at (x, y)
size_t get_repaint_count(bool** board, size_t x, size_t y) {
  size_t count = 0;
  bool color = true;

  for (size_t i = 0; i < 8; i++) {
    for (size_t j = 0; j < 8; j++) {
      if (board[i + x][j + y] != color) count++;
      color = !color;
    }
    color = !color;
  }

  // Check if the count is minimum
  if (count > 32) count = 64 - count;

  return count;
}

// Get minimum repaint count on board
size_t get_min_repaint_count(bool** board, size_t row, size_t column) {
  size_t count = 64;
  size_t repaint_count;

  for (size_t i = 0; i <= row - 8; i++)
    for (size_t j = 0; j <= column - 8; j++) {
      repaint_count = get_repaint_count(board, i, j);
      if (count > repaint_count) count = repaint_count;
    }

  return count;
}

int main(int argc, char* argv[]) {
  size_t n, m;
  bool** board;
  char color;

  scanf("%zu %zu", &n, &m);
  getchar();

  board = malloc(sizeof(bool*) * n);
  for (size_t i = 0; i < n; i++) {
    board[i] = malloc(sizeof(bool) * m);
    for (size_t j = 0; j < m; j++) {
      scanf("%c", &color);
      board[i][j] = color == BLACK;
    }

    getchar();
  }

  printf("%zu\n", get_min_repaint_count(board, n, m));

  for (size_t i = 0; i < n; i++) free(board[i]);
  free(board);
}
