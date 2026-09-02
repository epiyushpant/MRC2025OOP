#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    cout << "a > b: " << (a > b) << endl;
    cout << "a == b: " << (a == b) << endl;

    cout << "(a > 5 && b < 10): " << (a > 5 && b < 10) << endl;
    cout << "(a > 15 || b < 10): " << (a > 15 || b < 10) << endl;

    return 0;
}

