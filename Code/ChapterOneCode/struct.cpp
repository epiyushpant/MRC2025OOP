#include <iostream>
using namespace std;

// Define a struct named 'Person'
struct Person {
    string name;
    int age;
    double height;
};

int main() {
    // Create an instance of Person
    Person p1;

    // Assign values to the members
    p1.name = "Alice";
    p1.age = 30;
    p1.height = 5.5;

    // Access and print the values
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height << " feet" << endl;

    return 0;
}
