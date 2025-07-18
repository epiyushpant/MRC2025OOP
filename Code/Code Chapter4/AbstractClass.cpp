//Abstract class in c++ 

#include <iostream>
using namespace std;
class AbstractClass {
public:
    virtual void show() = 0; // Pure virtual function
};  

class ConcreteClass : public AbstractClass {
public:
    void show() override { // Implementing the pure virtual function
        cout << "Concrete class show function called." << endl;
    }
};

int main() {
    AbstractClass* obj; // Abstract class pointer
    ConcreteClass concreteObj; // Concrete class object
    obj = &concreteObj; // Pointing to concrete class object

    obj->show(); // Calls the implemented pure virtual function in ConcreteClass

    return 0;
}
// Output:
// Concrete class show function called.
// This code demonstrates the use of an abstract class in C++ with a pure virtual function.


//An abstract class in C++ is a class that cannot be instantiated directly and is designed to be inherited by other classes.
//It must contain at least one pure virtual function.

//A pure virtual function is a virtual function that has no implementation in the base class. It is declared using = 0.

//Why to use it 
//1. To define a common interface for derived classes.
//2. To enforce that derived classes implement specific functions.

/*

| Feature                | Explanation                                     |
| ---------------------- | ----------------------------------------------- |
| Abstract Class         | Contains at least one pure virtual function     |
| Cannot be instantiated | You can't create objects of an abstract class   |
| Used for               | Interface design and enforcing derived behavior |
| Must be inherited      | To provide real functionality                   |

*/

