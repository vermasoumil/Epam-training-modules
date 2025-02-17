#include <iostream>
#include <cstring>

using namespace std;

class MyClass {
private:
    int *data;
    int size;

public:
    MyClass() {
        size = 0;
        data = nullptr;
        cout << "Default Constructor called." << endl;
    }

    MyClass(int n, int val) {
        size = n;
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = val;
        }
        cout << "Parameterized Constructor called with size: " << size << " and value: " << val << endl;
    }

    MyClass(const MyClass &other) {
        size = other.size;
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = other.data[i];
        }
        cout << "Copy Constructor called." << endl;
    }

    MyClass(MyClass &&other) noexcept {
        size = other.size; // move constructor in C++ is a special constructor used to transfer the ownership of resources from one object to another, typically when an object is being initialized with a temporary object
        data = other.data;
        other.size = 0;
        other.data = nullptr;
        cout << "Move Constructor called." << endl;
    }

    MyClass(double value) {
        size = 1;
        data = new int[size];
        data[0] = static_cast<int>(value);
        cout << "Conversion Constructor called with value: " << value << endl;
    }

    ~MyClass() {
        delete[] data;
        cout << "Destructor called." << endl;
    }

    void display() const {
        cout << "Data: ";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2(5, 10);
    MyClass obj3 = obj2;
    MyClass obj4 = MyClass(3, 20);
    MyClass obj5 = 7.9;

    obj2.display();
    obj3.display();
    obj4.display();
    obj5.display();

    return 0;
}
