#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maximum(T a , T b){
    return (a > b)? a : b; 
}


int main(){

    int x{5};
    int y{7};

    double q{6.3};
    double e{4.5};


    // string x{"Hello"};
    // string y{"epam"};

    int* p_x {&x};
    int* p_y{&y};

    auto result = maximum(p_x,p_y);
    std::cout << "result : " << *result << std::endl;
   
    return 0;
}