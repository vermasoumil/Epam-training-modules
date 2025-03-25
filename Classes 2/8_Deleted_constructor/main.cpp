#include <iostream>
// Disable a constructor from being used to create objects/
class Point
{
private : 
	double* x{};
	double* y{};
	
	void invalidate(){
		x = nullptr;
		y = nullptr;
	}
public:
	//Point() = delete;
	Point(double x_param, double y_param);
	~Point();
    //Copy constructor
	Point(const Point& source_point) = delete;

    //Move constructor
    Point( Point&& source_point) =  delete;

	
	//Setters
	void set_x(double x){
		*(this->x) = x; // Dereference and assign
	}
	void set_y(double y){
		*(this->y) = y; // Dereference and assign
	}
	
	//Getters
	double * get_x()const{
		return x;
	}
	
	double * get_y()const{
		return y;
	}

	double * steal_x(){
		double * new_x = x;
		x = nullptr;
		return new_x;
	}
	
	double * steal_y(){
		double* new_y = y;
		y = nullptr;
		return new_y;
	}
	
	//Utilities
	void print_info()const{
			std::cout << "Point [ x : " << *x << ", y: " << (*y) << "]" << std::endl;
	}
};

Point::Point(double x_param, double y_param) 
	: x(new double(x_param)),
		y(new double(y_param))
{
    std::cout << "Point constructed  : " << this << std::endl;

}
/*
//Copy constructor
Point::Point(const Point& source_point)
	: x(new double(*(source_point.get_x()))),
		y(new double(*(source_point.get_y())))
{
	std::cout << "Body of copy constructor" << std::endl;
}

//Move constructor
Point::Point( Point&& source_point)
	: x(source_point.steal_x()),
		y(source_point.steal_y())
{
    //source_point.invalidate();
	std::cout << "Body of move constructor" << std::endl;
}
*/


Point::~Point()
{
	delete x;
	delete y;
}


int main(){
    //Point p1(21.6,78.4);//work fine;
    Point p1();
    //p1.print_info();//not work as it is deleted
   // Point p1(std::move(Point(4.6,5.2)));
    return 0;
}