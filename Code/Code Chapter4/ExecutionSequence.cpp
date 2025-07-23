#include <iostream>
using namespace std;

class Grandfather {
public:
    Grandfather() {
        cout << "Grandfather Constructor\n";
    }
    ~Grandfather() {
        cout << "Grandfather Destructor\n";
    }
};

class Father : public Grandfather {
public:
    Father() {
        cout << "Father Constructor\n";
    }
    ~Father() {
        cout << "Father Destructor\n";
    }
};

class Child : public Father {
public:
    Child() {
        cout << "Child Constructor\n";
    }
    ~Child() {
        cout << "Child Destructor\n";
    }
};

int main() {
    Child obj;
    return 0;
}


// grandfather -> father - > child
// Constructor calls: Grandfather -> Father -> Child
// Destructor calls: Child -> Father -> Grandfather
// This sequence ensures that the base class constructors are called before the derived class constructors,
// and the derived class destructors are called before the base class destructors.
// This is important for proper initialization and cleanup of resources in an inheritance hierarchy.