#include <iostream>
using namespace std;

class A {
public:
    int a = 10;
};

class B : virtual public A {
public:
    int b = 20;
};

class C : virtual public A {
public:
    int c = 30;
};

class D : public B, public C {
public:
    int d = 40;
};

int main() {
    D obj;

    cout << obj.b << endl;  // 20
    cout << obj.c << endl;  // 30
    cout << obj.d << endl;  // 40

    //cout << obj.a << endl;  // ERROR: ambiguous

    cout << obj.B::a;  // 10

}