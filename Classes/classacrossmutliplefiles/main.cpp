#include <iostream>
#include "constant.h"
#include "cylinder.h"

int main() {
    // Create a Cylinder object with radius 10 and height 10
    Cylinder cylinder1(10, 10);
    std::cout << "Volume: " << cylinder1.volume() << std::endl;  // Print the initial volume

    // Modify the object
    cylinder1.set_base_radius(100);  // Set the base radius to 100
    cylinder1.set_height(10);  // Set the height to 10

    std::cout << "Volume: " << cylinder1.volume() << std::endl;  // Print the modified volume

    return 0;
}
