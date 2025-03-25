#include<iostream>
#include<memory>


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

Dog::Dog(std::string name_param):dog_name(name_param)
{
    std::cout<<"constructor for dog"<<dog_name<<"called"<<std::endl;
}
Dog::~Dog()
{
std::cout<<"Desturctor is called    "<<dog_name<<std::endl;
}
std::unique_ptr<Dog>get_unique_ptr()
    {
        std::unique_ptr<Dog>dog_ptr_internal=std::make_unique<Dog>("Phil");
        return dog_ptr_internal;
    }
class Person{
    public:
    Person()=default;
    Person(std::string name);
    ~Person();

    void set_friend(std::shared_ptr<Person>p)
    {
        m_friend=p;
    }
     private:
     std::shared_ptr<Person>m_friend;
     std::string m_name{"unnamed"};
};
int main()
{

    //Basic use of weak ptr;

std::shared_ptr<Dog>shared_ptr_dog_1=std::make_shared<Dog>("Dog1");
std::shared_ptr<int>shared_ptr_int_1=std::make_shared<int>(399);

std::weak_ptr<Dog> weak_ptr_dog_1(shared_ptr_dog_1);
std::weak_ptr<int>weak_ptr_int_1(shared_ptr_int_1);


//-> or * iske saath nahi use ho sakte

//std::cout<<"Dog name"<<weak_ptr_dog_1->get_name()<<std::endl;


// use with lock and shared method
	// To use a weak ptr you have to turn it into a shared_ptr with the lock method
    
	std::cout << std::endl;
    std::shared_ptr<Dog> weak_turned_shared = weak_ptr_dog_1.lock();
    std::cout << "weak_turned_shared use count : " << weak_turned_shared.use_count() << std::endl;
    std::cout << "Dog name : " << weak_turned_shared->get_name() << std::endl;
	std::cout << "Dog name : " << shared_ptr_dog_1->get_name() << std::endl;
    

    //Cycling dependency problem
	//Circular dependencies
	// std::shared_ptr<Person> person_a = std::make_shared<Person>("Alison");
    // std::shared_ptr<Person> person_b = std::make_shared<Person>("Beth");
    
    // person_a->set_friend(person_b);
    // person_b->set_friend(person_a);
	
    
    return 0;
}