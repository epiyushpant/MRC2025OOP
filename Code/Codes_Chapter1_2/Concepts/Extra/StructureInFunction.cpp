#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
};

void display(Employee e) {
    cout << "Employee: " << e.name << ", ID: " << e.id << endl;
}

int main() {
    Employee emp = { "Sita", 1001 };
    display(emp);

    return 0;
}
