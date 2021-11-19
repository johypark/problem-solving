#include <array>
#include <iostream>

enum { FLOOR_LENGTH = 15, ROOM_LENGTH = 14 };

using namespace std;

array<array<int, ROOM_LENGTH + 1>, FLOOR_LENGTH> getAptTable() {
  array<array<int, ROOM_LENGTH + 1>, FLOOR_LENGTH> aptTable;
  for (size_t j = 1; j < aptTable[0].size(); j++)
    aptTable[0][j] = j;

  int sum;
  for (size_t i = 1; i < aptTable.size(); i++) {
    sum = 0;
    for (size_t j = 1; j < aptTable[0].size(); j++) {
      sum += aptTable[i - 1][j];
      aptTable[i][j] = sum;
    }
  }

  return aptTable;
}

int main() {
  int t;
  cin >> t;

  int k, n;
  array<array<int, ROOM_LENGTH + 1>, FLOOR_LENGTH> aptTable = getAptTable();
  for (int i = 0; i < t; i++) {
    cin >> k >> n;

    cout << aptTable[k][n] << '\n';
  }
}
