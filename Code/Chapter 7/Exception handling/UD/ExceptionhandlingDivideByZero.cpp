/* 
When we talk about user-defined types in the context of exception handling,
 it usually means throwing and catching objects of classes (custom types you define) 
instead of just built-in types like int or char.

Note 
Instead of throwing simple values, you can throw instances of your own classes.
This allows more meaningful error information and custom behaviors.
Usually, user-defined exception classes store error details, provide member functions,
and sometimes derive from std::exception.

*/

#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidOperation : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Invalid operation!";
    }
};

double divide(int a, int b) {
    if (b == 0)
        throw InvalidOperation();
    return static_cast<double>(a) / b;
}

int main() {
    try {
        cout << divide(10, 2) << endl;
        cout << divide(10, 0) << endl;
    } catch (const InvalidOperation& e) {
        cout << e.what() << endl;
    }
    return 0;
}


