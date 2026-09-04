/*
#include <iostream>
using namespace std;

class Patient {
private:
    int bloodPressure;
    int sugarLevel;

public:
    Patient(int bp, int sugar) {
        bloodPressure = bp;
        sugarLevel = sugar;
    }

    friend class Doctor;  // Make whole Doctor class friend
};

class Doctor {
public:

    void checkPatient(Patient &p) {
        cout << "Doctor checking patient report:" << endl;
        cout << "Blood Pressure: " << p.bloodPressure << endl;
        cout << "Sugar Level: " << p.sugarLevel << endl;
    }
};

int main() {
    Patient patient1(120, 85);
    Doctor doctor1;
    doctor1.checkPatient(patient1);
    return 0;
}
*/
#include <iostream>
using namespace std;

class Student {
private:
    int marks;
    int attendance;

public:
    Student(int m, int a) {
        marks = m;
        attendance = a;
    }

    friend class Teacher;
};

class Teacher {
public:
    void checkStudent(Student &s) {
        cout << "Teacher checking student report:" << endl;
        cout << "Marks: " << s.marks << endl;
        cout << "Attendance: " << s.attendance << "%" << endl;
    }
};

int main() {

    Student student1(85, 90);

    Teacher teacher1;

    teacher1.checkStudent(student1);

    return 0;
}