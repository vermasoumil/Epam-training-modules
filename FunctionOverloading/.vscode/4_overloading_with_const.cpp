#include <iostream>

/*
int max(int a, int b){
    return (a > b)? a : b;
}
*/

int max( int a,  int b);

int main(){
    // Test cases for max function
    std::cout << "Test Case 1: " << max(5, 10) << std::endl; // 10
    std::cout << "Test Case 2: " << max(15, 12) << std::endl; // 16 (15 incremented to 16)
    std::cout << "Test Case 3: " << max(7, 7) << std::endl; // 8 (7 incremented to 8)

    return 0;
}

int max( int a,  int b){
    ++a;
    return (a > b)? a : b;
}
