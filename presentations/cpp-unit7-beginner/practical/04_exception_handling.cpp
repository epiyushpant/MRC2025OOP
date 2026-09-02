// Practical 4: try, catch, throw — basic type and user-defined type
// Compile: g++ 04_exception_handling.cpp -o 04_exception_handling

#include <iostream>
#include <string>
using namespace std;

// User-defined exception type (our own class)
class MyError {
public:
    string msg;
    MyError(string m) {
        msg = m;
    }
};

int main() {
    int choice;
    cout << "Enter 1 to throw an int (basic type)" << endl;
    cout << "Enter 2 to throw MyError (user-defined type)" << endl;
    cout << "Enter any other number for no error: ";
    cin >> choice;

    try {
        if (choice == 1) {
            throw 0;   // basic type: int
        }
        if (choice == 2) {
            throw MyError("Marks must be 0 to 100");  // our class
        }
        cout << "No error. Program finished normally." << endl;
    }
    catch (int n) {
        cout << "Caught basic type (int): cannot use " << n << endl;
    }
    catch (MyError e) {
        cout << "Caught user-defined type: " << e.msg << endl;
    }
    catch (...) {
        cout << "Caught some other error." << endl;
    }

    return 0;
}
