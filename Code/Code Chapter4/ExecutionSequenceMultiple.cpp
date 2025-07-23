#include <iostream>
using namespace std;

// Base class 1
class Car {
public:
    Car() {
        cout << "Car Constructor\n";
    }
    ~Car() {
        cout << "Car Destructor\n";
    }
    void drive() {
        cout << "Driving the car...\n";
    }
};

// Base class 2
class MusicSystem {
public:
    MusicSystem() {
        cout << "MusicSystem Constructor\n";
    }
    ~MusicSystem() {
        cout << "MusicSystem Destructor\n";
    }
    void playMusic() {
        cout << "Playing music...\n";
    }
};

// Derived class using multiple inheritance
class SmartCar : public Car, public MusicSystem {
public:
    SmartCar() {
        cout << "SmartCar Constructor\n";
    }
    ~SmartCar() {
        cout << "SmartCar Destructor\n";
    }
    void navigate() {
        cout << "Navigating with GPS...\n";
    }
};

int main() {
    SmartCar myCar;
    myCar.drive();        // From Car
    myCar.playMusic();    // From MusicSystem
    myCar.navigate();     // Own method
    return 0;
}
// Execution sequence in multiple inheritance:
// Constructor calls: Car -> MusicSystem -> SmartCar (left to right)
// Destructor calls: SmartCar -> MusicSystem -> Car (right to left)
// This sequence ensures that the base class constructors are called before the derived class constructors,
// and the derived class destructors are called before the base class destructors.
// This is important for proper initialization and cleanup of resources in a multiple inheritance scenario.
