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
    
    std::string get_nme() const{
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

int main()
{
{
    // //Normal array allocation on the stack without unique ptr
    // std::cout<<"working with the array on stack"<<std::endl;
    // Dog dog_array[3] {Dog("Dog1"),Dog("Dog2"),Dog("Dog3")};
    // for(size_t i{0};i<3;++i)
    // {
    //     dog_array[i].print();
    // }

    //Array allocated on the heap

//     std::cout<<"working on the heap array"<<std::endl;

// Dog *dog_array_heap=new Dog[3]{Dog("d1"),Dog("d2"),Dog("d3")};

// for(size_t i{0};i<3;++i)
// {
//   dog_array_heap[i].print();
// }

// delete[] dog_array_heap; // without it is not releasing any memory




//Array allocated on the heap with unique_ptr. Releases space for array automatically
{
    //auto arr_ptr = std::unique_ptr<Dog[]> ( new Dog[3]{Dog("Dog7"), Dog("Dog8") , Dog("Dog9")});
    
    auto arr_ptr = std::make_unique<Dog[]>(3);// Works. Can't initialize individual elements
    //auto arr_ptr = std::make_unique<Dog[]>(3) {Dog("Dog7"), Dog("Dog8") , Dog("Dog9")};//Compiler error
    //auto arr_ptr = std::make_unique<Dog[]>{Dog("Dog7"), Dog("Dog8") , Dog("Dog9")};//Compiler error

    for (size_t i{0} ; i < 3 ; ++i){
        arr_ptr[i].print() ;
    }
     
 }


 std::cout << "Done!" << std::endl;
    return 0;
}
};