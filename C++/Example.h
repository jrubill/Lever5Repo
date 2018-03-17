#ifndef __Example_H__
#define __Example_H__

#include <iostream>

class Example {
public:
	Example();
	Example(std::string name);
	Example(const Example&);
	~Example();
	friend std::ostream& operator<<(std::ostream&, const Example&);
	static std::string doSomething();
private:
	std::string name;

};
#endif // __Example_H__