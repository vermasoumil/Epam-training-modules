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

int main()
{
    
    
    std::shared_ptr<int[]> shared_ptr_int_arr_1( new int[10]{1,2,3,4,5,6,7,8});
	std::shared_ptr<Dog[]> shared_ptr_dog_arr_1( new Dog[10]{Dog("Dog1"),Dog("Dog2")});
	
     shared_ptr_int_arr_1[3] = 28;
     
    // shared_ptr<Dog[]> shared_ptr_dog_arr_1( new Dog[10]{Dog("Dog1"),Dog("Dog2")});


	//Setting elements
	shared_ptr_int_arr_1[3] = 28;
	shared_ptr_dog_arr_1[1] = Dog("Fluzzy");

	//Read int array
	std::cout << std::endl;
	std::cout << "Reading data from arrays" << std::endl;
	std::cout << "Reading shared_ptr_int_arr_1: " << std::endl;
	for(size_t i{0}; i < 10 ; ++i){
		std::cout << "shared_ptr_int_arr_1[" << i << "] : " << shared_ptr_int_arr_1[i] << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "Reading shared_ptr_dog_arr_1: " << std::endl;
	for(size_t i{0}; i < 10 ; ++i){
		std::cout << "shared_ptr_dog_arr_1[" << i << "] : " << shared_ptr_dog_arr_1[i].get_name() << std::endl;
	}
   
    return 0;
}