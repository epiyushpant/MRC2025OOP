#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
};

class PrivateDerived : private Base {
public:
    void show() {
        cout << pub << endl;      // OK: now private
        cout << prot << endl;     // OK: now private
    }
};

int main() {
    PrivateDerived pd;
    //cout << pd.pub << endl;  // Error: private in Derived
    return 0;
}
