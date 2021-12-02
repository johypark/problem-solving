#include <iostream>

enum {
  KING_NUM = 1,
  QUEEN_NUM = 1,
  ROOK_NUM = 2,
  BISHOP_NUM = 2,
  KNIGHT_NUM = 2,
  PAWN_NUM = 8
};

using namespace std;

int main() {
  int king, queen, rook, bishop, knight, pawn;
  cin >> king >> queen >> rook >> bishop >> knight >> pawn;

  cout << KING_NUM - king << ' ';
  cout << QUEEN_NUM - queen << ' ';
  cout << ROOK_NUM - rook << ' ';
  cout << BISHOP_NUM - bishop << ' ';
  cout << KNIGHT_NUM - knight << ' ';
  cout << PAWN_NUM - pawn << endl;
}
