#include<iostream>

template<typename T,typename P>
auto maximum(T a, P b)
{
    return (a>b)?a:b;
}
// function definition main se pehele hi declare karni padegi nahi to error aa jaega
int main()
{
    auto max=maximum('e',22);
std::cout<<max<<" "<<sizeof(max)<<std::endl;
return 0;
    
}