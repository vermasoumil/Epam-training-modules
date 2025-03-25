#include <iostream>
const double PI {3.1415926535897932384626433832795};
class Cylinder {
    public : 
        //Constructors
       // Cylinder() = default;   
        Cylinder(double rad_param=10,double height_param = 5  );
        //Functions (methods)
        double volume();   //yaha pe ek default consturctor h aur ek default initialize leking compiler confuse ho kar error de dega isliye ek co comment karo
                              //agar ek param h aur dusra nahi h to wo apne aap fetch kar lega lekin pehla wala blank hona chaiye nahi to dono do fir
        //Setter and getter methods
        double get_base_radius();
        double get_height();

        void set_base_radius(double rad_param);

        void set_height(double height_param);
    private : 
        //Member variables
        double base_radius{1};
        double height{1};
};


/// MEMBERWISE INITIALISATION LIST

// Cylinder::Cylinder(double rad_param,double height_param){
//     base_radius = rad_param;
//     height = height_param;
//     std::cout <<"Two param constructor called" << std::endl;
// }

//INITIALIZER LIST
      //ye uneccsary copy hone se bachata h aur kahi kahi isi se initalize hi hota h

Cylinder::Cylinder(double rad_param,double height_param)
:base_radius(rad_param),height(height_param)
{

}

//IT IS ALWAYS BETTER TO CHOOSE INITIALSER LIST TO PREVENT UNWANTED COPY ISSUSES AND EASY DEBUGGING BUT ORDER OF THE VARIABLES MATTER HERE.
double Cylinder::volume(){
    return PI * base_radius * base_radius * height;
}

//Setter and getter methods
double Cylinder::get_base_radius(){
    return base_radius;
}
double Cylinder::get_height(){
    return height;
}

void Cylinder::set_base_radius(double rad_param){
    base_radius = rad_param;
}

void Cylinder::set_height(double height_param){
    height = height_param;
}




int main(){

     //Cylinder c1;
    Cylinder c1(4);
    std::cout << "volume : " << c1.volume() << std::endl;
    std::cout<<c1.get_base_radius()<<" "<<c1.get_height()<<std::endl;
   
    return 0;
}