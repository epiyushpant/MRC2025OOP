// Relational operator overloading allows user-defined classes to compare objects using relational operators such as >, <, >=, <=, ==, and !=. 
// This makes object comparison intuitive and similar to built-in types.

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee(string n, double s) : name(n), salary(s) {}

    // Getters to access private members safely
    string getName() const { return name; }
    double getSalary() const { return salary; }

    // Overload relational operators based on salary
    // emp1 >> emp2 
    //emp1 calls operator> and emp2 is passed as an argument
    bool operator>(const Employee& e) const {
        return salary > e.salary;
    }

    bool operator<(const Employee& e) const {
        return salary < e.salary;
    }

    bool operator==(const Employee& e) const {
        return salary == e.salary;
    }

    bool operator!=(const Employee& e) const {
        //return !(*this == e);
        //return !(name == e.name && salary == e.salary);
        return salary != e.salary;
    }

    bool operator>=(const Employee& e) const {
        return salary >= e.salary;
    }

    bool operator<=(const Employee& e) const {
        return salary <= e.salary;
    }

    // Display function
    void display() const {
        cout << "Name: " << name << ", Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp1("Alice", 75000);
    Employee emp2("Bob", 60000);

    emp1.display();
    emp2.display();

    if (emp1 > emp2)
        cout << emp1.getName() << " earns more than " << emp2.getName() << endl;

    if (emp2 <= emp1)
        cout << emp2.getName() << " earns less or equal to " << emp1.getName() << endl;

    if (emp1 != emp2)
        cout << "Salaries of " << emp1.getName() << " and " << emp2.getName() << " are different." << endl;

    return 0;
}
