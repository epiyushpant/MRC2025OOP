#include <iostream>
using namespace std;

void validateAge(int age) {
    if (age < 0)
        throw "Age cannot be negative!";  // throw string literal exception
    else if (age < 18)
        throw "Age must be at least 18!";
    else
        cout << "Age is valid: " << age << endl;
}

int main() {
    try {
        validateAge(25);
        validateAge(-5);  // This will throw
    }
    catch (const char* msg) {
        cout << "Validation error: " << msg << endl;
    }
    return 0;

}
