#include "Example.h"
#include "Singleton.h"

int main() {
    Example p;
    Example t("name");
    std::cout << "P name is: " << p << "\nT name is: " << t << std::endl;

    Example *pointer = new Example();
    std::cout << pointer << ": " << *pointer << std::endl;

    std::cout << Example::doSomething() << std::endl;
    delete pointer;
    
    Singleton::getInstance().printName();
}