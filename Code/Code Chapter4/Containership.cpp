#include <iostream>
using namespace std;

// Contained class (part)
class Engine {
public:
    void start() {
        cout << "Engine started..." << endl;
    }
};

// Container class (whole)
class Car {
private:
    Engine engine;  // Car contains an Engine  (car has ans engine)

public:
    Car() {
        cout << "Car is being constructed." << endl;
        engine.start();  // Using Engine functionality
    }

    void drive() {
        cout << "Car is now driving." << endl;
    }
};

int main() {
    Car myCar;
    myCar.drive();
    return 0;
}


/* 
Inheritance means one class is a specialized version of another.
Relationship: “is-a”
A Dog is an Animal
A Manager is an Employee

Containership means one class contains an object of another class.
Relationship: “has-a”
A Car has an Engine
A Person has a Heart

*/