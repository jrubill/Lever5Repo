#include <stdio.h>
#include <iostream>
#include "Ship.h"

#define HIT 1
#define MISS 2
#define DESTROYED 3
#define NEUTRAL 0

int array1[10][10] = {};
int coord1,coord2;

void Userinput() {

  std::cout << "Input X coordinate: ";
  std::cin >> coord1;
  std::cout << coord1 << std::endl << "Input Y coordinate: ";
  std::cin >> coord2;
  std::cout << coord2 << std::endl;
};

void board() {

//array setup

for(int i = 0; i < 10; i++) {
  for(int j = 0; j < 10; j++) {
    if(coord1 == i && coord2 == j) {
        array1[i-1][j-1] = 3;

      } else {
        array1[i][j] = 0;
      }
    }
  }
}


void printBoard() {

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
}






int main(int argc, char **argv) {
  std::cout << "Make Battleship Work. I dare you" << std::endl;
  Userinput();
  board();
  printBoard();

  return 0;
}
