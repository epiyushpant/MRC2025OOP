//Mehod overriding example in C++
#include<iostream>
using namespace std;
class Base {
public:
    virtual void show() { // Virtual function
        cout << "Base class show function called." << endl;
    }
};
class Derived : public Base {
public:
    void show() override { // Overriding the base class function
        cout << "Derived class show function called." << endl;
    }
};  

int main() {
    Base b;       // Base class object
    b.show();     // Calls Base::show()

    Derived d;    // Derived class object
    d.show();     // Calls Derived::show()

    Base* ptr;    // Pointer of Base class type
    ptr = &d;     // Base class pointer pointing to Derived class object

    ptr->show();  // Calls Derived::show() because show() is virtual
                  // This is runtime polymorphism in action

}

// Output:
// Derived class show function called.
// This code demonstrates method overriding in C++ using virtual functions.
// Method overriding allows a derived class to provide a specific implementation of a function that is already defined in its base class.
// It is a key feature of polymorphism in object-oriented programming, allowing for dynamic binding at runtime.
// Method overriding is used to achieve runtime polymorphism, where the function to be called is determined at runtime based on the type of the object pointed to by the base class pointer.

//real life example
// In a real-world scenario, method overriding can be used in a graphics application where you have
// a base class `Shape` with a method `draw()`. Different derived classes like `Circle`, `Square`, and `Triangle` can override the `draw()` method to provide their specific drawing logic. This allows the application to call `draw()` on a `Shape` pointer, and the correct drawing method will be executed based on the actual object type at runtime.
// This is useful for creating flexible and extensible code that can handle new shapes without modifying existing code, adhering to the Open/Closed Principle of object-oriented design.
// Method overriding is a fundamental concept in object-oriented programming that allows for dynamic behavior and flexibility in code design.
// It enables the derived class to change or extend the behavior of the base class method, providing a way to implement polymorphism.

