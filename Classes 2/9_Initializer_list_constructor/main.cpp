#include<iostream>
#include<cassert>
struct Point{
public:
Point(std::initializer_list<double>list)
{
    assert(list.size()==2); //if the size of list is not 2 tab ye terminate kar dega aage ka process
    // std::cout<<"Initalizer list consturctor yaha pe call hua h"<<std::endl;
    // std::cout<<"list size  "<<list.size()<<std::endl;
    // std::cout<<"first elt  "<<*(list.begin())<<std::endl;
    // std::cout<<"sec elt"<<*(list.begin()+1)<<std::endl;
    // std::cout<<"third elt"<<*(list.begin()+2)<<std::endl;

    // for(size_t i{};i<list.size();++i)
    // {
    //     std::cout<<"elt["<<i<<"]"<<*(list.begin()+i)<<std::endl;
    // }
    x=*(list.begin());
    y=*(list.begin()+1);

}

// void print_point(const Point &p)
// {
//     std::cout<<"Point[x "<<p.x<<"    " <<"Y  "<<p.y<<"]"<<std::endl;
// }

void print_point() const{
    std::cout<<"Point[ x"<<x<<",y"<<y<<"]"<<std::endl;
}
private:
    double x;
    double y;
};
int main()
{
    Point p1{23.5,90.0,90.0};
    p1.print_point();
    //print_point(p1);
    return 0;
}