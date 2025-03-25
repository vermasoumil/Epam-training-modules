#include <iostream>

// void createArray() {
//     int* arr = new int[10]; // Memory allocated but not deleted
//     std::cout << "Array created!" << std::endl;
// }


void createArray() {
    int* arr = new int[10];
    std::cout << "Array created!" << std::endl;
    delete[] arr; // Memory released
    std::cout << "Array deleted!" << std::endl;
}
int main() {

    createArray(); // Leak occurs here
    std::cout << "Memory_leak_solved!" << std::endl;
    return 0;
}


