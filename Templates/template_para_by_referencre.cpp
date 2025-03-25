#include<iostream>
#include<string.h>
using namespace std;
template<typename T>T maximum(const T& a, const T& b);
int main(){
    int a{10};
    int b{23};
     
    double c{54.8};
    double d{63.4};
    
    cout<<"address of a'here"<<&a
<<endl;
    string e="Hello";
    string f="epamers";

   // auto max=maximum(c,a);

   //explcit template arguments

   auto max=(c,d);
   cout<<"address of a'here"<<&a
<<endl;
    cout<<max<<endl;
    return 0;
}
template<typename T>const T& maximum(const T& a, const T& b)
{
    std::cout<<"a's address"<<&a<<endl;
    return (a>b)?a:b;
}