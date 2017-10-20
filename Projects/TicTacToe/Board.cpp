#include "Board.h"

Board::Board() {
  clearBoard();
  movesLeft = 9;
}

Board::~Board() {}
void Board::place(int x, int y, int player) {

}
bool Board::isGameOver() {
  if (movesLeft == 0) return true;
  return false;
}
void Board::clearBoard() {
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      board[i][j] = 0;
}

void Board::printBoard() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) std::cout << board[i][j] << " ";
    std::cout << std::endl;
  }
}
