
/*

Exception handling is a mechanism that allows a program to deal with unexpected situations (errors) 
at runtime without crashing the program.

It provides a way to transfer control from one part of the code to another when an error occurs.
C++ provides built-in support for exception handling using three keywords:
try, catch, and throw.


throw: Throws an exception
try: Code block to test for errors
catch: Handles the error

try {
    // Code that may throw an exception
    throw some_value;
} 
catch (data_type var) {
    // Code to handle exception
}


Example for basic type exception handling in C++
*/

#include <iostream>
using namespace std;

int main() {
    try {
        int num = -5;
        int mum2 = 0 ; 
        if (num < 0) {
            throw "Negative number not allowed!";
        }
    } catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }
    return 0;
}

// int main() {

//     try{
//         int num = 5;
//         int num2 = 0 ; 

//          if (num2 = 0) {
//             throw "Negative number not allowed!";
//         }
//         float num3 = num / num2; // This will cause a division by zero error
//         cout << "Result: " << num3 << endl;
//     }
//     catch (const char* msg) {
//         cout << "Exception caught: Division by zero!" << endl;
//     }
//     return 0;
// }




