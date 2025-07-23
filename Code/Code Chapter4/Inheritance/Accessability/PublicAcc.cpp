#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};

class PublicDerived : public Base {
public:
    void access() {
        cout << pub << endl;      // OK: public
        cout << prot << endl;     // OK: protected
        //cout << priv << endl;  // Error: private in Base
    }
};

int main() {
    PublicDerived d;
    cout << d.pub << endl;       // OK: public in Derived
    // cout << d.prot << endl;   // Error: protected in Derived
    return 0;
}
