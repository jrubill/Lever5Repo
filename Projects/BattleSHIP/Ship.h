// Header file for Ship

#ifndef __SHIP_H__
#define __SHIP_H__

class Ship {
private:
  int x;
  int y;

public:
  Ship();           // default constructor
  ~Ship();          // destructor
  Ship(const Ship&);// copy constructor
  Ship(int,int);


};

#endif //__SQUARE_H__
