#include <iostream>
using namespace std;

class A {
public:
    int a = 10;
};

class B : public A {
public:
    int b = 20;
};

class C : public A {
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

/*

 A
          a = 10
          /    \
         /      \
        B        C
     b = 20   c = 30
         \      /
          \    /
            D
          d = 40


The important point is that D contains two copies of A:

D
├── B
│   ├── A → a = 10
│   └── b = 20
│
├── C
│   ├── A → a = 10
│   └── c = 30
│
└── d = 40


So this is ambiguous:
cout << obj.a;

But these are fine:
cout << obj.B::a;  // 10
cout << obj.C::a;  // 10



---if you want to avoid this ambiguity, you can use virtual inheritance. In that case, D will contain only one copy of A:---


A
            a=10
           /    \
          /      \
         B        C
       b=20      c=30
          \      /
           \    /
             D
            d=40

*/