#include<iostream>
#include<string>
class Square
{
    public:
   explicit Square(double side_param);

Square(double side_param,const std::string& color_param,int shading_param);

    ~Square();
    double surface() const;

    private:
    double m_side;
    std::string m_color;
    int m_shading;
    double m_position;

};

// Square::Square(double side_param):m_side{side_param}
// {
// std::cout<<"one param constructor is called"<<std::endl;
// }

Square::Square(double side_param):Square{side_param,"black",6}
{
    m_position=10;
std::cout<<"one param constructor is called"<<std::endl;
}

Square::Square(double side_param,const std::string& color_param,int shading_param)
:m_side{side_param},m_color{color_param},m_shading{shading_param}
{

std::cout<<"multi param consturctor is called"<<std::endl;
}

double Square::surface() const{
    return m_side*m_side;
}

Square::~Square()
{

}

bool compare(const Square& square1,const Square& square2)
{
    return (square1.surface()>square2.surface())?true:false;
}

int main()
{
     Square s1(100.0);
    // Square s2(20.0);
     


    //  std::cout<<std::boolalpha;
    //  std::cout<<compare(s1,s2)<<std::endl;


     //Implicit conversion;
     //std::cout<<compare(s1,45.9)<<std::endl;
  //ye jo 45.9 ye implict convert ho raha h square se double p isse bachne k liye explicit use kar lo

  //suppose agar do parameter ho aur ek ko na chahte ho ki access kare tabhi explicit use kar sakte h
     return 0;
}