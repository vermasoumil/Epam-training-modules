#include <iostream>

inline int max(int a, int b){    //inline fuction overhead se bachata h matlab bar bar memory me jo call kar raha hota h usko
    if(a> b){
        return a;
    }else{
        return b;
    }
}

int main(){

    int a{15};
    int b{8};

    //std::cout << "max : " << max(a,b) << std::endl;

    //What the compiler might do to inline your function call
    std::cout << "max : " ;
    if(a> b){
       std::cout << a << std::endl;
    }else{
        std::cout << b << std::endl;
    }

   
    return 0;
}