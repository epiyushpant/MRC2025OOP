// Practical 1: Create and apply a namespace
// Compile: g++ 01_namespace.cpp -o 01_namespace

#include <iostream>
using namespace std;

// A named box for college-related functions
namespace College {
    void welcome() {
        cout << "Welcome to the college!" << endl;
    }

    int totalMarks(int a, int b) {
        return a + b;
    }
}

// Another box — same function name "welcome" is OK
namespace Hostel {
    void welcome() {
        cout << "Welcome to the hostel!" << endl;
    }
}

int main() {
    // Use :: to pick which namespace
    College::welcome();
    Hostel::welcome();

    cout << "Total marks = " << College::totalMarks(40, 45) << endl;
    return 0;
}
