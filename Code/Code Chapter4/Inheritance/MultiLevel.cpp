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

class Puppy : public Dog {
public:
    void weep() {
        cout << "Weeping..." << endl;
    }
};

int main() {
    cout << "Animal " << endl;
    Animal a;
    a.eat(); // from Animal

    cout << "Dog " << endl;


    Dog d ; 
    d.eat(); 
    d.bark();

    cout << "Puppy " << endl;
    Puppy p;
    p.eat();   // from Animal
    p.bark();  // from Dog
    p.weep();  // own function
    return 0;
}
