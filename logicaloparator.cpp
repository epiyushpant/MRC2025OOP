#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "enter two numbers: ";
    cin >> a;
    cout << "enter second number: ";
    cin >>b;
    if(a>b)
    {
        cout << a << " is greater than " << b;
    }
    else if(b>a)
    {
        cout << b << " is greater than " << a;
    }
    else
    {
        cout << "Both numbers are equal.";
    }
    return 0;
}   



// C++ program to demonstrate the use of logical operators
// Logical operators are used to combine conditional statements
// The logical operators in C++ are:
// 1. AND operator (&&): Returns true if both conditions are true
// 2. OR operator (||): Returns true if at least one condition is true
// 3. NOT operator (!): Returns true if the condition is false
// Example of logical operators in C++