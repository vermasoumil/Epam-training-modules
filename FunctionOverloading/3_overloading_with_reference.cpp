#include <iostream>
#include <string>

// Ambiguous calls
void say_my_name(const std::string& name){
    std::cout << "Your name is (ref) : " << name << std::endl;
}

void say_my_name(std::string name){
    std::cout << "Your name is (non ref) : " << name << std::endl;
}

// Implicit conversions with references

double max(double a, double b){
    std::cout<< "double max called" << std::endl;
    return (a>b)?a:b;
}

const int& max(const int& a, const int& b){
    std::cout << "int max called" << std::endl;
    return (a>b)?a:b;
}

int main(){
    // Test cases for say_my_name
    std::string name1 = "Soumil";
    say_my_name(name1); // Reference call

    say_my_name("Verma"); // String literal, non-ref call

    // Ambiguous call - Uncommenting this will cause an error
    // say_my_name(std::string("Temp"));

    // Test cases for max function
    char a{6};
    char b{9};
    auto result1 = max(a,b); // int max called due to implicit promotion

    int x = 7;
    int y = 12;
    auto result2 = max(x, y); // int max called

    double p = 5.5;
    double q = 10.2;
    auto result3 = max(p, q); // double max called

    int m = 5;
    double n = 7.5;
    auto result4 = max(m, n); // double max called due to implicit conversion

    return 0;
}
