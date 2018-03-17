#include "Example.h"

// one line: Should be done in header file for compiler optimization
Example::Example() : name("default") { std::cout << "You called the default constructor\n"; }

// one line: Should be done in header file for compiler optimization
Example::Example(std::string n) : name(n) { std::cout << "You called the conversion constructor\n"; }

// basic copy constructor
Example::Example(const Example &other) {
    if (this == &other) return;
    name = other.name;
    std::cout << "You called the copy constructor\n";
}

// not necessary since there are no pointer variables. Shown as example
Example::~Example() {
    std::cout << "You deleted me :(\n";
}

// friend function allows access of private variables
std::ostream& operator<<(std::ostream &os, const Example &ex) {
    return os << ex.name;
}

// static function can be called without instance of class
std::string Example::doSomething() {
    return "I did something";
}