#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;  // Pointer stores the address of x

    cout << "Value of x: " << x << endl;          // 10
    cout << "Address of x: " << &x << endl;       // e.g., 0x61ff08
    cout << "Value of ptr (address): " << ptr << endl;  // same as &x
    cout << "Value at address (dereferencing): " << *ptr << endl;  // 10

    return 0;
}


/*  
A pointer is a variable that stores the memory address of another variable.

Think of it like this:

A normal variable holds a value (e.g., int x = 10;)

A pointer variable holds the address of that value (e.g., int* p = &x;)  



🧠 Why Use Pointers?
To manipulate memory directly

To pass large data efficiently to functions

For dynamic memory allocation (new, delete)

To work with arrays and strings

For advanced data structures like linked lists, trees, etc.*/

