//Header file for Board

#ifndef __Board_H__
#define __Board_H__

#include <iostream>

class Board {
private:

public:
  Board(); //default constructor cannot have parameters
  ~Board(); // destructor
  Board(const Board&); //copy constructor
                    //overloading constructor

};

#endif
