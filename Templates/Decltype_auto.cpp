#include<iostream>

template<typename T,typename P>
decltype(auto) maximum(T a, P b)
{
    return(a>b)?a:b;
}

int main()
{
    int x{3};
    double y{34.4};
    auto ans=maximum(x,y);
    std::cout<<ans<<" "<<sizeof(ans)<<""<<std::endl;
    return 0;
}