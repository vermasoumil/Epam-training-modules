#include "cylinder.h"

// Parameterized constructor definition
Cylinder::Cylinder(double rad_param, double height_param) {
    base_radius = rad_param;  // Set the base radius
    height = height_param;  // Set the height
}

// Volume calculation method definition
double Cylinder::volume() {
    return PI * base_radius * base_radius * height;  // Volume = π * r² * h
}
