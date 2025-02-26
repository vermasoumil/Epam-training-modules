// #include <iostream>


// int max(int a, int b){
//     std::cout << "int overload called" << std::endl;
//     return (a>b)? a : b; 
// }

// double max(double a, double b){
//     std::cout << "double overload called" << std::endl;
//     return (a>b)? a : b; 
// }

// double max(int a, double b){
//     std::cout << "(int,double) overload called" << std::endl;
//     return (a>b)? a : b; 
// }

// double max(double a, int b){
//     std::cout << "(double,int) overload called" << std::endl;
//     return (a>b)? a : b; 
// }

// double max(double a, int b,int c){
//     std::cout << "(double,int,int) overload called" << std::endl;
//     return a;
// }

// std::string_view  max(std::string_view a, std::string_view b){
//     std::cout << "(string_view,string_view) overload called" << std::endl;
//      return (a>b)? a : b;
// }

// int main(){

//     int x{4};
//     int y{9};
//     double a{5.4};
//     double b{7.4};

//     auto result = max(b,x,y);

//     max("Hello","World");
   
//     return 0;
    //}



// OVERLOADING WITH CONSTANT PARAMETER BY VALUE
//#include <iostream>


/*
int max(int a, int b){
    return (a > b)? a : b;
}
*/


// int max( int a,  int b); //agar yaha const add karenge to error ayega kyunki wo allow nahi karega 

// int main(){

   
//     return 0;
// }

// int max( int a,  int b){
//     ++a;
//     return (a > b)? a : b;
// }


//OVERLOADING WITH CONST POINTER AND POINTER TO CONST PARAMETERS



// #include <iostream>


// int max(int*a , int* b){
//     std::cout << "max with int* called" << std::endl;
//     return (*a > *b)? *a : *b;
// }

// int max(const int* a, const int* b){
//     std::cout << "max with cont int* called" << std::endl;
//     return (*a > *b)? *a : *b;
// }


// /*
// int min(const int* a, const int* b){
//     return (*a < *b)? *a : *b;
// }
// */                                                  // ye aur niche wale min ko compiler ek hi manega


// int min(const int* const a, const int* const b){
// 	std::cout << "&a : " << &a << std::endl;
// 	std::cout << "&b : " << &b << std::endl;
//     return (*a < *b)? *a : *b;
// }
// int main(){

    
//         // int a{10};
//         // int b{12};
    
//         // const int c{30};
//         // const int d{15};
    
//         // auto result = max(&a,&b);
//         	const int c{30};
// 	const int d{15};

//     const int* p_c{&c};
//     const int* p_d{&d};

//     std::cout << "&p_c : " << &p_c << std::endl;
//     std::cout << "&p_d : " << &p_d << std::endl;

//     auto result = min(p_c,p_d);


    
//     return 0;

// }


             // OVERLOADING WITH CONSTANT REFERENCES

// #include <iostream>

// int max(int& a, int&b){
//     std::cout << "max with int& called" << std::endl;

//     //Can change a and b through the reference 
//     //a = 200;// This change will be visible outside the function
    
//     return (a > b)? a : b;
// }                                 // YE DONO MAX FUNCTION CHAL JAYENGE YAHA PE BAD DECLARATION ALAG HOGI

// int max(const int& a, const int& b){
//     std::cout << "max with const int& called" << std::endl;
    
//     //Can NOT change a and b through the reference 
//     //a = 200; // Will give a compiler error.
//     return (a > b)? a : b;
// }


// int main(){

// 	int a{45};
//     int b{85};
    
//     int max1 = max(a,b);
//     std::cout << "max1 : " << max1 << std::endl;

//     const int& ref_a = a;
//     const int& ref_b = b;

//     int max2 = max(ref_a,ref_b);
//     std::cout << "max2 : " << max2 << std::endl;  

   
//     return 0;
// }
     
               //OVRELOADING WITH DIFFERENT PARAMETERS
    
            //    #include <iostream>

            //    //Declarations
            //    void print_age(int age = 33);
               
            //    void print_age(long int age = 44);
               
            //    int main(){
               
            //    int age{90};
            //        print_age(age);    /// YAHA PE CONFUSE HO RAHA H KI KIS PRINT FUNCITON KO CALL KARE
            //          // DECLARE KARDO UPAR FIR SAHI CHALEGA
                   
            //        return 0;
            //    }
               
            //    //Definitions
            //    void print_age(int age ){
            //        std::cout << "Your age is( int version)  : " << age << std::endl;
            //    }
               
            //    void print_age(long int age){
            //        std::cout << "Your age is (long int version) : " << age << std::endl;
            //    }