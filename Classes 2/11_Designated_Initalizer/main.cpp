#include<iostream>

struct Component
{
 double x;
 double y;
 double z;

};

void print(const Component&c)
{
  std::cout<<"Component[x]"<<c.x<<"y"<<c.y<<"z"<<c.z<<std::endl;
}

int main()
{
    Component c1{.x=5.6,.y=0.5,.z=90.0};
    Component c2{.y=9,.z=8.9};
//    Component c3{.z=9,.x=0.8,.y=99.0}; ye fail hoga kyunki order matter karta h declaration me
    
     print(c1);
     print(c2);
}