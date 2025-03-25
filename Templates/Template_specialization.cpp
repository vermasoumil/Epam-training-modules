#include <iostream>
#include <cstring>
using namespace std;

template <typename T>T maximum(T a , T b){
    return (a > b)? a : b; 
}

template<>
const char* maximum<const char*>(const char* a,const char* b)
{
 return (std::strcmp(a,b)>0)?a:b;   
}

int main(){

    int x{5};
    int y{7};

    double q{6.3};
    double e{4.5};


    string a{"Hello"};
    string b{"epam"};

    int* p_x {&x};
    int* p_y{&y};

    int result = maximum(x,y);
    std::cout << "result : " << result << std::endl;

    auto ans=maximum(a,b);
    cout<<ans<<endl;

    const char*g{"wild"};
    const char*h{"animal"};

    const char *ans2=maximum(g,h);
    cout<<ans2<<endl;
   
    return 0;
}