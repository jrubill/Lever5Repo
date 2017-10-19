#include <stdio.h>
#include <iostream>

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
      if(coord1 == 3 && coord2 == 5) {
        array1[i-1][j-1] = 3;
      }
      } else {
        array1[i][j] = 0;
      }
    }
  }
}


void printBoard() {

//This Prints the Board

for(int i = 0; i < 10; i++) {
  for(int j = 0; j < 10; j++) {
    std::cout << array1[i][j];
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
