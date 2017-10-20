#include "Ship.h"

Ship::Ship() : x(0), y(0) {
  std::cout << "Ship created\n";
} // can only do this with constructors

Ship::~Ship() {
  // don't worry about this
}

Ship::Ship(const Ship &other) {
  // don't worry about this
}

Ship::Ship(int a, int b) : x(a), y(b) {}

int Ship::getX() { return x; }

int Ship::getY() { return y; }
