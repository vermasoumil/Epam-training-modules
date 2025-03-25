#include<iostream>
#include<memory>
#include<string>

class Dog{
    public:
    explicit Dog(std::string name);
    Dog()=default;
    ~Dog();

    void print() const{
        std::cout<<"His name is"<<dog_name<<std::endl;
    }
    
    std::string get_name() const{
        return dog_name;
    }
    void set_dog_name(const std::string &name)
    {
        dog_name=name;
    }
  
    private:
    std::string dog_name="shiphu";
};
class Person{
public:
Person(std::string name);
~Person();

void adopt_dog(std::unique_ptr<Dog>dog);

private:
int m_age;
std:: string m_name;

};

Dog::Dog(std::string name_param):dog_name(name_param)
{
    std::cout<<"constructor for dog"<<dog_name<<"called"<<std::endl;
}
Dog::~Dog()
{
std::cout<<"Desturctor is called    "<<dog_name<<std::endl;
}

Person::Person(std::string name):m_name(name)
{

}

void Person::adopt_dog(std::unique_ptr<Dog>dog)
{
    std::cout<<m_name<<"finally adopted the "<<dog->get_name()<<std::endl;
}

void fundog(std::unique_ptr<Dog>d)
{
    d->print();
}
void fundogref(const std::unique_ptr<Dog>&d)
{
    d->set_dog_name("pilpu");
    d->print();
   // d.reset();
}
Person::~Person() {
    // Define the destructor
    std::cout << "Destructor for " << m_name << " is called" << std::endl;
}
std::unique_ptr<Dog>unique_fun()
{
    std::unique_ptr<Dog>doggy=std::make_unique<Dog>("function local");
    std::cout<<"unique_ptr_address(inside)"<<&doggy<<std::endl;
    return doggy;
}
int main()
{
    // std::unique_ptr<Dog>doggy=std::make_unique<Dog>("Dog1");
    // //fundog(doggy);// it fails because it is trying to make a copy which is not allowed
    // fundog(std::move(doggy));

    // std::cout<<"thisdogcontains"<<doggy.get()<<std::endl;


// std::unique_ptr<Dog>doggy2=std::make_unique<Dog>("Dog2");
// Person person1("John");
// person1.adopt_dog(std::move(doggy2));
// std::cout<<"Doing something"<<doggy2.get()<<std::endl;

// std::unique_ptr<Dog>doggy3=std::make_unique<Dog>("Dog3");
// doggy3->print();
// fundogref(doggy3);
// std::cout<<"   "<<std::endl;
// doggy3->print();

std::unique_ptr<Dog>doggy4=unique_fun();
    std::cout<<"unique_ptr_address(outside)"<<&doggy4<<std::endl;
    doggy4->print();
}