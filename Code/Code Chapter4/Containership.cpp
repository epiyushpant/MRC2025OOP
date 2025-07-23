#include <iostream>
using namespace std;

<<<<<<< HEAD
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
=======
class first {
public:
    void showf()
    {
        cout << "Hello from first class\n";
    }
};

// Container class
class second {
    // creating object of first
    first f;

public:
    // constructor
    second()
    {
        // calling function of first class
        f.showf();
    }
};

int main()
{
    // creating object of second
    second s;
}
>>>>>>> d7711ef... Add code and slide upto chapter 4
