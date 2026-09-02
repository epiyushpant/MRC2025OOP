/* 
Unary operator overloading allows redefining operators that work on a single operand (e.g., ++, --, -, !) 
for user-defined types.

*/

#include <iostream>
using namespace std;

class Count {
    int value;
public:
    Count(int v = 0) : value(v) {}

    // Prefix increment
    Count operator++() {
        ++value;
        return *this; // Return the current object after incrementing
    }

    //this : is a pointer to the current object
    //*this : dereferences the pointer to access the current object


    // Postfix increment
    Count operator++(int) {   // int tells the compiler this is postfix
        Count temp = *this;
        ++value;
        return temp;  // Return the original value before incrementing
    }

    void display() { cout << value << endl; }
};

int main() {
    Count c1(5);
    ++c1;   // Calls prefix
    c1.display();  // 6
    c1++;   // Calls postfix
    c1.display();  // 7
}

