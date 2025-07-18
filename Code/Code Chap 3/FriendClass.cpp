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
    void checkPatient(Patient p) {
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
