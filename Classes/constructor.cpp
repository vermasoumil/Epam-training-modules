#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder {
    public : 
        //Constructors
        Cylinder(){                                      /// CONSTRUCTORS HAVE THE SAME NAME AS CLASS AUR DEFAULT CONSTRUCTOR BHI HOTA H JO AGAR KOI CONSTURCTOR
            base_radius = 2.0;                            // NA HO TO PRIVATE WALI VALUE ACCESS KAR LETA H
            height = 2.0;
        }

        Cylinder(double rad_param,double height_param){
            base_radius = rad_param;
            height = height_param;
        }
   
        //Functions (methods)
        double volume(){
            return PI * base_radius * base_radius * height;
        }
    private : 
        //Member variables
        double base_radius{1};
        double height{1};
};


int main(){
    //Cylinder cylinder1(10,4); // Object
    //Cylinder cylinder1(10,2);
    Cylinder cylinder1;
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    return 0;
}