#include<iostream>
using namespace std;
int main()
{
    // auto func=[](auto a,auto b)
    // {
    //     return a+b;
    // };

    auto func=[]<typename T,typename P>(T a,P b)
    {
        return a+b;
    };
    int a{5};
    double b{90.9};
    auto reuslt=func(a,b);
    cout<<reuslt<<endl;
    cout<<sizeof(reuslt)<<endl;

    return 0;
}