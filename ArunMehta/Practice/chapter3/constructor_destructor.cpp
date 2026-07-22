#include <iostream>
using namespace std;

/*
    Contructor:
    - A constructor is a special member function of class that runs 
    automatically when an object is created.
    - It is used to initialize the object (e.g. set initial values)
    - It has the same name as the class and no return type
    Destructor:
    - A destructor is a special member function that runs automatically when an 
    object is destroyed (goes out of scope or deleted)
    - It is used to clean up resources or perform any final actions
    before the object is removed
    - It has the same name as the class, but preceded by a tilde ~, 
    and has no return type or parameters.
*/
class Person{
    public:
        string name;
    
        // Constructor: called when object is created
        Person(string n){
            name = n;
            cout<<"Constructor called: "<<name<<" is created."<<endl;
        }

        // Destructor: called when object is destroyed
        ~Person(){
            cout<<"Destructor called: "<<name<<" is destroyed."<<endl;
        }
        
        void display(){
            cout<<"Name: "<<name<<endl;
        }
};

int main(){
    Person p1("Arun"); // constructor runs here
    p1.display();

    {
        Person p2("Reyan"); // constructor runs here
        p2.display();
    }

    // Destructor runs here when p2 goes out of scope
    return 0;
}
// Destructor runs here when p1 goes out of scope