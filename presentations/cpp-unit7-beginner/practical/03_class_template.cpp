// Practical 3: Create and apply a class template
// Compile: g++ 03_class_template.cpp -o 03_class_template

#include <iostream>
using namespace std;

// A calculator whose numbers can be int or float
template <typename T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }
    T add() { return a + b; }
    T mul() { return a * b; }
};

int main() {
    Calculator<int> whole(4, 5);
    Calculator<float> decimal(2.5f, 4.0f);

    cout << "int add    = " << whole.add() << endl;
    cout << "int mul    = " << whole.mul() << endl;
    cout << "float add  = " << decimal.add() << endl;
    cout << "float mul  = " << decimal.mul() << endl;
    return 0;
}
