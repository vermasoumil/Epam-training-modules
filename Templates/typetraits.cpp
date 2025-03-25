#include<iostream>
using namespace std;


template<typename T>
void print_number(T n)
{
    static_assert(is_integral_v<T>,"print_number can be called with intergal types");
    cout<<n<<endl;
}    

 int main()
 {
//     cout<<boolalpha;
// cout<<is_integral<int>::value<<endl;
// cout<<is_floating_point<int>::value<<endl;


// cout<<is_integral_v<int> <<endl;
// cout<<is_floating_point_v<int> <<endl;

int a=99;
print_number(a);

auto func=[]<typename T>(T a, T b){
    static_assert(is_integral_v<T>,"func can only be called with intergal types");
    return a+b;
};
double x{7};
int y{9};
func(x,y);
return 0;
}


    
 