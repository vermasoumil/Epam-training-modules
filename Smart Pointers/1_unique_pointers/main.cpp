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
    Dog dog1{"Doggy"};
    dog1.print();
    }

    //Using raw pointer here
    // Dog* p_dog2 = new Dog("Dog2");
    //     int * p_int1 = new int(100);
        
    //     p_dog2->print();
    //     std::cout << "Integer is : " << *p_int1 << std::endl;
    //     std::cout << "Integer lives at address : " << p_int1 << std::endl;
        
    //     //If you go out of scope withoug releasing (deleting) p_dog2 and
    //     // p_int1 you'll have leaked memory
    //     delete p_dog2; // Calls the destructor
    //     delete p_int1;



//Using unique_ptr : managed memory is owned by a single pointer at any moment.
    
    // {
    //     Dog * p_dog_3 = new Dog("Dog3");
    //     std::unique_ptr<Dog> up_dog_4{p_dog_3}; // Can also manage a previously allocated 
    //                                             // space managed by a raw pointer. You shouldn't
    //                                             // try to use the raw pointer from this point on
    //     std::unique_ptr<Dog> up_dog_5 {new Dog("Dog5")};
    //     std::unique_ptr<int> up_int2{new int(200)};
    //     std::unique_ptr<Dog> up_dog_6{nullptr};// Can also initialize with nullptr
    //                     // and give it memory to manage later, we'll see how to 
    //                     // do that with std::move later in the lecture. Just know
    //                     // that you can initialize a unique ptr with nullptr for now.
        
    //     //Can use unique pointer just like we use a raw pointer.
    //     up_dog_5->print(); // Calling function with -> operator
    //     //Assign to fundamental type
    //     * up_int2 = 500;
    //     std::cout << "Integer is : " << *up_int2 << std::endl; // dereferencing
    //     std::cout << "Integer lives at address : " << up_int2.get() << std::endl;

    // }
    // std::cout << "Hitting the outside scope" << std::endl; 
    

    
    //using make_unique syntax. Much cleaner (C++14 ) 
	//Calls new internally for us, we don't have to do it ourselves
    /// YE AUTOMATICALLY NEW SE HEAP ME MEMORY DILWA DEGA
    std::unique_ptr<Dog> up_dog_7 = std::make_unique<Dog>("Dog7");
    up_dog_7->print();
     
    std::unique_ptr<int> p_int3 = std::make_unique<int>(30);
    *p_int3 =67;
    std::cout << "Value pointed to by p_int3 is :"  << *p_int3 << std::endl;
    std::cout << "p_int pointing at address :" << p_int3.get() << std::endl;
    

 //COPIES AND ASSIGNMENT ARE NOT ALLOWED IN UNIQUE POINTER

    //Copies not allowed
    // std::unique_ptr<Dog> up_dog_8 = std::make_unique<Dog>("Dog8");
    // up_dog_8->print();
    // //Can get the wrapped pointer address : useful for older raw pointer APIs
    // std::cout << "Dog8 memory address: " << up_dog_8.get() << std::endl;

    // //Copies and Assignments are not allowed with unique ptr
    // std::unique_ptr<Dog> up_dog_9 = up_dog_8; // Error.This also does some kind of copy
    // std::unique_ptr<Dog> up_dog_10{up_dog_8}; // Error :  Copy constructor deleted
    




//YE POINTER KO EK SE DUSTRE PAR MOVE KAR SAKTA H AUR JO BACH JAEGA WO NULLPTR HO JAYEGA
    //Can however move the pointer. 
    /*
    std::unique_ptr<Dog> up_dog_11 = std::make_unique<Dog>("Dog11");
    {
        std::unique_ptr<Dog> up_dog_12 = std::move(up_dog_11); // Now up_dog_12 manages Dog11
                                                    // and up_dog_11 points to nothing(nullptr)
        up_dog_12->print_dog();
        std::cout << "Dog12 memory address : " << up_dog_12.get() << std::endl;
    
        std::cout << "up_dog_11 is now nullptr : " << up_dog_11.get() << std::endl;	
        if(up_dog_11){
            std::cout << "Pointer11 pointing to something valid" << std::endl;
        }else{
            std::cout << "Pointer11 point to nullpter" << std::endl;
        }	
    
    }
    std::cout << "Hitting the outside scope" << std::endl;
    */

//RESET SE IMMEDIATELY MEMORY RELEASE KAR SAKTE H BINA WAIT KARE

    std::unique_ptr<Dog> up_dog_13 = std::make_unique<Dog>("Dog13");
    up_dog_13.reset(); // releases memory and sets pointer to nullptr
    
    //Can use unique pointer in if statement to see if it points somewhere valid
    if(up_dog_13){
        std::cout << "up_dog_13 points somewhere valid : " << up_dog_13.get() << std::endl;
    }else{
        std::cout << "up_dog_13 points is null : " << up_dog_13.get() << std::endl;
    }


   std:: cout<<"Before destructor"<<std::endl;
}