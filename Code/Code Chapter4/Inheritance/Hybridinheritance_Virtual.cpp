#include <iostream>
using namespace std;

class Employee {
public:
    void showDetails() {
        cout << "Showing Employee details..." << endl;
    }
};

// Virtual inheritance avoids duplicate Employee base
<<<<<<< HEAD
class Manager : virtual  public Employee {
=======
class Manager : virtual public Employee {
>>>>>>> d7711ef... Add code and slide upto chapter 4
public:
    void manageTeam() {
        cout << "Managing team..." << endl;
    }
};

<<<<<<< HEAD
class Engineer :  virtual public Employee {
=======
class Engineer : virtual public Employee {
>>>>>>> d7711ef... Add code and slide upto chapter 4
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

<<<<<<< HEAD
    tl.showDetails();     //  No ambiguity now
=======
    tl.showDetails();     // ✅ No ambiguity now
>>>>>>> d7711ef... Add code and slide upto chapter 4
    tl.manageTeam();
    tl.writeCode();
    tl.leadProject();

    return 0;
}




