#include<iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A display()" << endl;
    }
};

class B {
public:
    void displayB() {
        cout << "Class B display()" << endl;
    }
};

class C : public A, public B {
public:
    void displayC() {
        cout << "Class C display()" << endl;
    }
};

int main() {
    C obj;
    obj.displayA(); // from A
    obj.displayB(); // from B
    obj.displayC(); // own
    return 0;
}
