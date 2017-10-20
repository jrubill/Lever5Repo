// Header file for Ship

#ifndef __SHIP_H__
#define __SHIP_H__

#include <iostream>

class Ship {
private:
  int x;
  int y;
  int size;

public:
  Ship();           // default constructor
  ~Ship();          // destructor
  Ship(const Ship&);// copy constructor
  Ship(int,int);
  Ship(int,int,int);
  int getX();
  int getY();


};

#endif //__SQUARE_H__
