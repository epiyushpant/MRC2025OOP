#include <iostream>
using namespace std;

// Base class
class Person {
private:
    int age;

protected:
    string name;

public:
    string city;
};

// Public Inheritance
class Student : public Person {
public:
    void showStudent() {
        // Public member remains public
        cout << "City: " << city << endl;

        // Protected member remains protected
        cout << "Name: " << name << endl;

        // Private member is inaccessible
        //cout << age;  // Error
    }
};

// Protected Inheritance
class Employee : protected Person {
public:
    void showEmployee() {
        // Public member becomes protected
        cout << "City: " << city << endl;

        // Protected member remains protected
        cout << "Name: " << name << endl;

        // Private member is inaccessible
        // cout << age;  // Error
    }
};

// Private Inheritance
class Teacher : private Person {
public:
    void showTeacher() {
        // Public member becomes private
        cout << "City: " << city << endl;

        // Protected member becomes private
        cout << "Name: " << name << endl;

        // Private member is inaccessible
        // cout << age;  // Error
    }
};

// class Teacher2 :  Teacher {
// public:
//     void showTeacher() {
//         // Public member becomes private
//         cout << "City: " << city << endl;

//         // Protected member becomes private
//         cout << "Name: " << name << endl;

//         // Private member is inaccessible
//         // cout << age;  // Error
//     }
// };


int main() {
    Student student;
    Employee employee;
    Teacher teacher;

    cout << "Student Details:" << endl;
    student.showStudent();

    cout << "\nEmployee Details:" << endl;
    employee.showEmployee();

    cout << "\nTeacher Details:" << endl;
    teacher.showTeacher();

    // Public inheritance:
    cout << "\nCity from Student: " << student.city << endl;

    // The following are errors:
   // cout << employee.city;  // Error: city is protected
    // cout << teacher.city;   // Error: city is private

    return 0;
}