#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b;

    // Prefix increment
    b = ++a;  // a is incremented first, then assigned to b
    cout << "After prefix increment (++a):" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Reset values
    a = 5;
    
    // Postfix increment
    b = a++;  // a is assigned to b first, then incremented
    cout << "After postfix increment (a++):" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
