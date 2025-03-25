#include<iostream>
struct Point
{
    double x;
    double y;
};
void print(const Point &p)
{
    std::cout<<"Point[x"<<p.x<<"Y"<<p.y<<std::endl;
}
    int main()
{
    Point p1{10.30,43};
    print(p1);

    int epam[]{43,53,53,53};  ///ye aise bhi initalize ho sakta h

    return 0;
}