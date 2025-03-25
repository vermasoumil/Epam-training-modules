#include<iostream>
#include<string.h>
using namespace std;
template<typename T>T maximum(T a, T b)
{
    return(a>b)?a:b;
}
int main(){
    int a{10};
    int b{23};
     
    double c{54.8};
    double d{63.4};
    
    string e="Hello";
    string f="epamers";

   // auto max=maximum(c,a);

   //explcit template arguments

   auto max=maximum<int>(c,a);
    cout<<max<<endl;
    return 0;
}