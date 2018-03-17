/* Example of Meyer's Singleton design pattern */
#ifndef __Singleton_H__
#define __Singleton_H__

#include <iostream>

class Singleton {
public:
	static Singleton& getInstance();
	void printName();
private:
	Singleton();
	// don't want our singleton to be copied
	Singleton(const Singleton&) = delete;
	// no assignment either
	void operator=(const Singleton&) = delete;
	// we'll allow it to be deleted though :)
	~Singleton();

};
#endif // __Singleton_H__