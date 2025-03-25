#ifndef CYLINDER_H
#define CYLINDER_H

#include "constant.h"  // Include constant header to access the PI value

class Cylinder {
public:
    // Constructors
    Cylinder() = default;  // Default constructor
    Cylinder(double rad_param, double height_param);  // Parameterized constructor

    // Functions (methods)
    double volume();  // Calculate the volume of the cylinder

    // Setter and getter methods
    double get_base_radius() { return base_radius; }
    double get_height() { return height; }

    void set_base_radius(double rad_param) { base_radius = rad_param; }
    void set_height(double height_param) { height = height_param; }

private:
    // Member variables
    double base_radius{1};  // Default base radius of the cylinder
    double height{1};  // Default height of the cylinder
};

#endif
