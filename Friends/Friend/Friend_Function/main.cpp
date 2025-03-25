#include<iostream>

class Dog{
    friend void dog_info();
    friend void dog_info(const Dog &d);
public:
Dog(const std:: string&name,int age)
:m_name(name),m_age(age)

{

}

private:
//friend function protected k liye bhi chalta h aaram se
//public se access hoga lekin hum nahi chahte
    std::string m_name;
    int m_age;
};

void dog_info(const Dog &d)
{
    std::cout<<"Dog"<<d.m_name<<" "<<d.m_age<<std::endl;
}
void dog_info()  ///overloading wale function ko bhi friend m declare karna padega tabhi chalega
{
    Dog dog2{"Shephu",4};
    std::cout<<dog2.m_name<<"   "<<dog2.m_age<<std::endl;
}
int main()
{
    Dog dog1("Fluffy",5);
    dog_info(dog1);
    dog_info();
    return 0;
}

//always choose your friends carefully because they can alter the private member variables as well.