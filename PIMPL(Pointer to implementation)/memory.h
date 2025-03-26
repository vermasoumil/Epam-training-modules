#ifndef MYCLASS_H
#define MYCLASS_H

#include <memory>

class MyClass {
public:
    MyClass();                         // Constructor
    ~MyClass();                        // Destructor
    void printMessage();               // Public method

private:
    // Forward declaration of implementation class
    class Impl;
    std::unique_ptr<Impl> pImpl;       // Pointer to Implementation (PIMPL)
};

#endif
