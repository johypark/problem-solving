#include <array>
#include <cmath>
#include <iostream>

using namespace std;

// DFS
bool solveSudoku(array<array<int, 9>, 9> &sudoku) {
  // Find 0
  int x = -1, y = -1;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (sudoku[i][j] == 0) {
        x = j;
        y = i;
        break;
      }
    }
    if (x != -1)
      break;
  }

  if (x == -1) {
    return true;
  } else {
    for (int i = 1; i <= 9; i++) {
      // Check
      bool isValid = true;

      // Check lines
      for (int j = 0; j < 9; j++) {
        if (sudoku[j][x] == i || sudoku[y][j] == i) {
          isValid = false;
          break;
        }
      }

      // Check square
      for (int j = y / 3 * 3; j < y / 3 * 3 + 3; j++) {
        for (int k = x / 3 * 3; k < x / 3 * 3 + 3; k++) {
          if (sudoku[j][k] == i) {
            isValid = false;
            break;
          }
        }
      }

      if (isValid) {
        sudoku[y][x] = i;

        // Return if solved
        if (solveSudoku(sudoku))
          return true;

        sudoku[y][x] = 0;
      }
    }
  }

  return false;
}

int main() {
  array<array<int, 9>, 9> sudoku;
  for (auto &row : sudoku)
    for (int &num : row)
      cin >> num;

  solveSudoku(sudoku);

  for (const auto &row : sudoku) {
    for (const int &num : row) {
      cout << num << ' ';
    }
    cout << '\n';
  }
}
