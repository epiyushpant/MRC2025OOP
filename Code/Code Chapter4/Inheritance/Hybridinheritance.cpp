#include <iostream>
using namespace std;

class Employee {
public:
    void showDetails() {
        cout << "Showing Employee details..." << endl;
    }
};

class Manager : public Employee {
public:
    void manageTeam() {
        cout << "Managing team..." << endl;
    }
};

class Engineer : public Employee {
public:
    void writeCode() {
        cout << "Writing code..." << endl;
    }
};

// Multiple inheritance with ambiguity
class TechLead : public Manager, public Engineer {
public:
    void leadProject() {
        cout << "Leading project..." << endl;
    }
};

int main() {
    TechLead tl;

    //t1.showDetails(); // This will cause ambiguity
    //Diamond Problem: which showDetails() to call?
    tl.Manager::showDetails();
    tl.Engineer::showDetails();

    tl.manageTeam();
    tl.writeCode();
    tl.leadProject();

    return 0;
}
