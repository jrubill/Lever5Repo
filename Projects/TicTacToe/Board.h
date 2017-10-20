
#ifndef __BOARD_H__
#define __BOARD_H__

#include <iostream>

class Board {
public:
  Board();
  ~Board();
  void place(int x, int y, int player);
  bool isGameOver();
  void clearBoard();
  void printBoard();
private:
  int board[3][3];
  int movesLeft;
};

#endif // __BOARD_H__
