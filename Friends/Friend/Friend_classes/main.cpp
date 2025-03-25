#include<iostream>

class Dog{
public:
Dog(const std:: string&name,int age)
:m_name(name),m_age(age)

{

}
private:
friend class Cat;
std::string m_name;
int m_age;
};

class Cat{
    public:
    void print_dog(const Dog &d)
    {
    std::cout<<d.m_name<<"  "<<d.m_age<<std::endl;
    std::cout<<this->m_name<<std::endl;
    //std::cout<<this->m_age<<std::endl;   //ye this pointer yahi cat ki age ko access kar raha h na ki dog wali ko
    };
    Cat(const std::string&name)
    :m_name(name)
    {

    }
    std::string m_name;
};

int main()
{
    Cat cat1("meow");
    Dog dog1("Timmy",8);
    cat1.print_dog(dog1);

} 