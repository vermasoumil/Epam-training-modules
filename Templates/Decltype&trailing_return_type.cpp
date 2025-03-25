#include<iostream>

template<typename T,typename P>
auto maximum(T a,P b)->decltype((a>b)?a:b){
    return (a>b)?a:b;
}

int main(){
    int a{10};
    double b{23};
    auto ans=maximum(a,b);
std::cout<<ans<<std::endl;
std::cout<<sizeof(ans)<<std::endl;
}

//decltype ko pehle left me nahi rak sakte kynki wo data type janta hi nahi h
// iske alwa agar usko main ke neeche rakha to bhi ararm se chalega lekin bina decltype k fail ho jayega
