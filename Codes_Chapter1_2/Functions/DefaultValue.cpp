#include <iostream>

using namespace std;

void display(string name="piyush" , int age=30) { 
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    display("Piyush", 32); // Pass both values
    display(); // Uses default name "Guest", but requires an age
    return 0;
}

// error happens because C++ requires default parameters to come last in a function declaration.
// The compiler expects all parameters before a default one to be explicitly provided.

/*

void display(int age, string name = "Guest") { 
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    display(25, "Piyush");  // Both arguments provided
    display(20);            // Uses default name "Guest"
    return 0;
}

*/