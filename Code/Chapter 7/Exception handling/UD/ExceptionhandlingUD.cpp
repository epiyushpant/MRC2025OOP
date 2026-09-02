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
using namespace std;

class InvalidAgeException {
    int age;
public:
    InvalidAgeException(int a) : age(a) {}
    void showError() {
        cout << "Invalid age: " << age << ". Age cannot be negative." << endl;
    }
};

void validateAge(int age) {
    if (age < 0)
        throw InvalidAgeException(age);
    else
        cout << "Age is valid: " << age << endl;
}

int main() {
    try {
        validateAge(25);
        validateAge(-10);
    }
    catch (InvalidAgeException& e) {
        e.showError();
    }
    return 0;
}

