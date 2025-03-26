#include "memory.h"
#include <iostream>

// Hidden Implementation Class
class MyClass::Impl {
public:
    Impl() {
        std::cout << "Impl Constructor: Object created." << std::endl;
    }

    ~Impl() {
        std::cout << "Impl Destructor: Object destroyed." << std::endl;
    }

    void printMessage() {
        std::cout << "Hello from PIMPL!" << std::endl;
    }
};

// Constructor
MyClass::MyClass() : pImpl(std::make_unique<Impl>()) {
    std::cout << "MyClass Constructor: Created using PIMPL." << std::endl;
}

// Destructor
MyClass::~MyClass() {
    std::cout << "MyClass Destructor: Destroying PIMPL." << std::endl;
}

// Delegate the call to the implementation
void MyClass::printMessage() {
    pImpl->printMessage();
}
