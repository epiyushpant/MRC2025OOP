#include<iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A show()" << endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B display()" << endl;
    }
};

class C : public A {
public:
    void displayC() {
        cout << "Class C display()" << endl;
    }
};

class D : public B, public C {
public:
    void displayD() {
        cout << "Class D display()" << endl;
    }
};

int main() {
    D obj;
    
    // obj.show(); // ❌ Error: Ambiguity due to two copies of A
    
    obj.B::show(); // Calls show() from B's A
    obj.C::show(); // Calls show() from C's A
    
    obj.displayB();
    obj.displayC();
    obj.displayD();
    
    return 0;
}
