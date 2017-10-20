#include <stdio.h>
#include <iostream>
#include "Ship.h"
#include "Board.h"

#define HIT 1
#define MISS 2
#define DESTROYED 3
#define NEUTRAL 0

int coord1,coord2;

void Userinput() {

  std::cout << "Input X coordinate: ";
  std::cin >> coord1;
  std::cout << coord1 << std::endl << "Input Y coordinate: ";
  std::cin >> coord2;
  std::cout << coord2 << std::endl;
};

int main(int argc, char **argv) {
  std::cout << "Make Battleship Work. I dare you" << std::endl;
  Userinput();
  Ship ship;
  Board Board;



  return 0;
}
