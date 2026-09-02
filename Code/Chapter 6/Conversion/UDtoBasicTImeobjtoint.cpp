#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
public:
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }

    // Convert Time to total minutes (int)
    operator int() {
        return hours * 60 + minutes;
    }

    void display() {
        cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t(2, 30);

    int totalMinutes = t;  // Time to int

    cout << "Total time in minutes: " << totalMinutes << endl;

    return 0;
}
