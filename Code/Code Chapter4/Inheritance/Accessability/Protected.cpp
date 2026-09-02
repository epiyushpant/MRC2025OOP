#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
};

class ProtectedDerived : protected Base {
public:
    void show() {
        cout << pub << endl;      // OK: now protected
        cout << prot << endl;     // OK: protected
    }
};

int main() {
    ProtectedDerived pd;
    cout << pd.pub << endl;  // Error: protected in Derived
    return 0;
}
