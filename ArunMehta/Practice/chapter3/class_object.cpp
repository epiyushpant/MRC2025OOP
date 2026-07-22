#include <iostream>
using namespace std;

/*
    Class:
    - A class is a blueprint or template that defines what data (attributes) and 
    what behaviors (functions) objects of that class will have.
    - It's like a plan or design.

    Object:
    - An object is a specific instance of a class.
    - It is created using the class blueprint.
    - Each object has its own data but shares the structure and
    behavior defined by the class.

    Access Specifiers:
    - private : Accessible within the class only
    - protected: Accessible within the class and subclasses
    - public: Accessible from anywhere
*/
// Define a class
class Student{
    // Data member
    public:
        string name;

        // member function
        void display(){
            cout<<"Student Name: "<<name<<endl;
        }
};
class Account{
    private:
        double balance;
};

int main(){
    Student s1; // Create an object
    s1.name = "Arun"; // Assign value to data member
    s1.display(); // call member function
}
