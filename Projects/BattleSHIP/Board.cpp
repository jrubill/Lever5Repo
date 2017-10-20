#include "Board.h"

Board::Board() {



  //array setup
  int array1[10][10] = {};
  int coord1,coord2;

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      if(coord1 == i && coord2 == j) {
          array1[i-1][j-1] = 3;

        } else {
          array1[i][j] = 0;
        }
      }
    }




  //This Prints the Board
  std::cout << std::endl;
  std::cout <<"  0 1 2 3 4 5 6 7 8 9\n";
  for(int i = 0; i < 10; i++) {
      std::cout << i << " ";
    for(int j = 0; j < 10; j++) {
      std::cout << array1[i][j] << " ";
    }
    std::cout << "\n";
    }


};

Board::~Board() {

};

Board::Board(const Board&) {

};
