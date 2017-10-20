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

Ship::Ship(int a, int b, int c) : x(a), y(b), size(c) {}

int Ship::getX() { return x; }

int Ship::getY() { return y; }

int Ship::getSize() { return size; }
