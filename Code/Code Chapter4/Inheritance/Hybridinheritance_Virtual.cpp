#include <iostream>
using namespace std;

class Employee {
public:
    void showDetails() {
        cout << "Showing Employee details..." << endl;
    }
};

// Virtual inheritance avoids duplicate Employee base
class Manager :  virtual public Employee {
public:
    void manageTeam() {
        cout << "Managing team..." << endl;
    }
};

class Engineer :  virtual public Employee {
public:
    void writeCode() {
        cout << "Writing code..." << endl;
    }
};

// Only one shared Employee base
class TechLead : public Manager, public Engineer {
public:
    void leadProject() {
        cout << "Leading project..." << endl;
    }
};

int main() {
    TechLead tl;

    tl.showDetails();     //  No ambiguity now
    tl.manageTeam();
    tl.writeCode();
    tl.leadProject();

    return 0;
}




