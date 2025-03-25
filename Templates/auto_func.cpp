#include <iostream>
#include <typeinfo>
using namespace std;
// Uncommented template function version of func_add
/*
template<typename T, typename P>
decltype(auto) func(T a, P b) {
    return a + b;
}
*/

auto func_add(auto a, auto b) {
    return a + b;
}

int main() {
    // Adding an integer and a floating-point number
    auto result = func_add(10, 20.0);
    
    // Outputs the result of the addition
    std::cout << result << std::endl;  
    
    // Outputs the type of result
    std::cout << typeid(result).name() << std::endl;  
    
    return 0;
}