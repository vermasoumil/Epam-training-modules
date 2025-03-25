#include <iostream>
#include <string>
using namespace std;

// template <typename T>T maximum(T a , T b){
//     return (a > b)? a : b; 
// }

template<typename T,typename P>
 T maximum(T a,P b)
{
    return (a>b)?a:b;
}

template<typename Returntype,typename T,typename P>
Returntype maximum(T a,P b)
{
    return (a>b)?a:b;
}

// we can put the return type in any order according to our need

//suppose agar return type bich me aur main me ekhi parameter call kar rahe to wo error dega kyunki uski pata hi nahi ki kya return karna h
int main(){

    int x{5};
    double y{7.8};

    // double q{6.3};
    // double e{4.5};


    // // string x{"Hello"};
    // // string y{"epam"}

    // int* p_x {&x};
    // int* p_y{&y};

    auto result = maximum<double,double,double>(x,y);
    std::cout << "result : " << sizeof(result) <<" "<<result<< std::endl;
   
    return 0;
}