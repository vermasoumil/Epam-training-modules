#include<iostream>
#include<typeinfo> 
using namespace std;
template<typename ReturnType=double,typename T,typename P>
ReturnType maximum(T a,P b)
{
    return (a>b)?a:b;
}

template<typename T,typename P,typename ReturnType=double>
ReturnType minimum(T a,P b)
{
    return (a<b)?a:b;
}
int main(){

    int a{8};
    double b{9.5};

    auto result=minimum<int,double,int>(a,b);
    cout<<result<<" "<<sizeof(result)<<" "<<typeid(result).name()<<endl;
    return 0;
}