#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base Constructor\n";
    }
    ~Base() {
        cout << "Base Destructor\n";
    }
    void hello() {
        cout << "Hello from Base\n";
    }
};

// Derived class
class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor\n";
    }
    ~Derived() {
        cout << "Derived Destructor\n";
    }
    void greet() {
        cout << "Greetings from Derived\n";
    }
};

int main() {
    Derived obj;
    obj.hello();   // inherited from Base
    obj.greet();   // defined in Derived
    return 0;
}
