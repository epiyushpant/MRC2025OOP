// Constructor types in C++ are used to initialize objects of a class. They can be defined in various ways, including default constructors,'
// parameterized constructors, and copy constructors. 
//Constructors can also be overloaded to provide different ways of initializing an object based on the parameters passed.


#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Default constructor          

    Person() {
        name = "Unknown";
        age = 0;
    }
    // Parameterized constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }
    // Copy constructor
    Person(const Person &p) {       
        name = p.name;
        age = p.age;
    }
    // Function to display person details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }                                       

};
int main() {
    Person p1; // Calls default constructor
    
    Person p2("Alice", 30); // Calls parameterized constructor
    
    Person p3 = p2; // Calls copy constructor 
      
    cout << "Person 1: ";
    p1.display();
    cout << "Person 2: ";
    p2.display();
    cout << "Person 3 (copy of Person 2): ";
    p3.display();
    return 0;
}

// Output:
// Person 1: Name: Unknown, Age: 0
// Person 2: Name: Alice, Age: 30
// Person 3 (copy of Person 2): Name: Alice, Age: 30

// This code demonstrates different types of constructors in C++: default, parameterized, and copy constructors.
// Constructors are special member functions that are automatically called when an object of a class is created.
// They are used to initialize the object's data members and can be overloaded to provide different ways of initializing an object.
// Constructors are essential for ensuring that objects are in a valid state when they are created.
// They can also be used to enforce certain constraints on the object's state, such as ensuring that
// the age is a positive integer or that the name is not empty.
// Constructors are a fundamental part of object-oriented programming in C++ and play a crucial role in the lifecycle of an object.
// They help in encapsulating the initialization logic within the class, making the code cleaner and more maintainable.
