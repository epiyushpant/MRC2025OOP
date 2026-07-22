#include <iostream>
using namespace std;

class Animal{
    protected:
        string name;// protected: accessible in dog and cat, not in main function
    
    public:
        void eat(){
            cout<<name<<"eats\n";
        }

        void setName(string n)
        {
            name=n;
        }    
};

class Dog: public Animal{
    public:
        void bark(){
            cout<<name<<" barks\n"; // allowed: name is protected
        }
};

class Cat: public Animal{
    public:
        void meow(){
            cout<<name<<" meows\n";
        }
};

int main(){
    Dog d;
    d.setName("Bruno");
    d.eat(); //inherited from Animal
    d.bark(); // Dog's own method

    Cat c;
    c.setName("Luna");
    c.eat();// inherited from Animal
    c.meow(); // cat's own method

    //cout<<d.name;//Error: 'name' is protected, not accessible here
}