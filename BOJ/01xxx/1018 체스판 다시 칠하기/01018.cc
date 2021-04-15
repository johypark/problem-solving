// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <string>
#include <vector>

enum { BLACK = 'B', WHITE = 'W' };

// Get minimum repaint count on 8x8 board starting at (x, y)
size_t GetRepaintCount(const std::vector<std::vector<bool>>& board, size_t x,
                       size_t y) {
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
size_t GetMinRepaintCount(const std::vector<std::vector<bool>>& board) {
  size_t row = board.size();
  size_t column = board[0].size();
  size_t count = 64;
  size_t repaint_count;

  for (size_t i = 0; i <= row - 8; i++)
    for (size_t j = 0; j <= column - 8; j++) {
      repaint_count = GetRepaintCount(board, i, j);
      if (count > repaint_count) count = repaint_count;
    }

  return count;
}

int main(int argc, char* argv[]) {
  size_t n, m;
  std::string colors;

  std::cin >> n >> m;

  std::vector<std::vector<bool>> board(n, std::vector<bool>(m));

  for (size_t i = 0; i < n; i++) {
    std::cin >> colors;
    for (size_t j = 0; j < m; j++) board[i][j] = colors[j] == BLACK;
  }

  std::cout << GetMinRepaintCount(board) << std::endl;
}
