/*

In the context of exception handling, basic types (also called primitive types) refer to the
fundamental data types built into the C++ language, such as:

int (integer numbers)
char (characters)
float, double (floating-point numbers)
bool (boolean values)
const char* (C-style string literals)

When we say throwing basic types, it means you directly throw values of these types as exceptions. For example:
throw 10;           // throwing an int
throw 'x';          // throwing a char
throw 3.14;         // throwing a double
throw "Error!";     // throwing a string literal (const char*)

Why throw basic types?
Quick and simple for small programs or demonstration.
No need to define a special class for an error.
But usually Throwing user-defined types (custom classes) or standard exceptions (like std::exception) 
is preferred in real-world programs because:

You can include detailed error information.
It's easier to extend and maintain.
Allows catching exceptions by type and acting accordingly.

*/ 

#include <iostream>
using namespace std;

double divide(int numerator, int denominator) {
    if (denominator == 0){
        throw 0; // throw int exception for division by zero
      } 
      else
      {     
        return static_cast<double>(numerator) / denominator;
      }
}


int main() {
    try {
        cout << divide(10, 2) << endl;
        cout << divide(10, 0) << endl;  // This will throw
    }
    catch (int e) {
        cout << "Error: invalid!"  << e << endl;
    }
    return 0;
}


