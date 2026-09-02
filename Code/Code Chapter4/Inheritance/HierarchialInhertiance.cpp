#include<iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Meowing..." << endl;
    }
};

int main() {
    Dog d;
    Cat c;

    cout << " Calling Dog : " << endl;
    d.eat();  // inherited from Animal
    d.bark(); // Dog’s own function

    cout << " Calling Cat : " << endl;
    c.eat();  // inherited from Animal
    c.meow(); // Cat’s own function

    return 0;
}
