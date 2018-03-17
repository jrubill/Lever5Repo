#include "Singleton.h"


Singleton::Singleton() {
    std::cout << "Singleton created\n";
}

Singleton::~Singleton() {
    std::cout << "Singleton deleted\n";
}

Singleton& Singleton::getInstance() {
    static Singleton instance;
    return instance;
}

void Singleton::printName() {
    std::cout << "My name is Harold the Singleton\n";
}