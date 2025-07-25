#include <iostream>
using namespace std;

class Employee {
public:
    void getDetails(int empId) {
        cout << "Getting details for Employee ID: " << empId << endl;
    }
};

class Manager : public Employee {
public:
    //using Employee::getDetails;  // Brings base version into scope
    void getDetails() {
        cout << "Getting manager details (no ID required)" << endl;
    }
};

int main() {
    Manager m;

    m.getDetails();        //  Calls Manager's version

    //m.getDetails(101);  //  ERROR: function does not take arguments (Base version hidden)

    //  Call base version explicitly
    //m.Employee::getDetails(101);

    return 0;
}

/* In C++, if a derived class defines a function with the same name as a 
base class function, then all base class functions with that name are hidden,
 even if they have different parameters.

This is called name hiding, and it's based on function name only, 
not the signature.

using Employee::getDetails;
This brings all overloaded versions of getDetails from Employee into the scope of Manager, 
so the compiler can see them.


*/
