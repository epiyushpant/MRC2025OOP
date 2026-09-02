#include <iostream>
using namespace std;

template <class T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T multiply(T a, T b) {
        return a * b;
    }
};

int main() {
    Calculator<int> intCalc; 
    cout << "Int Add: " << intCalc.add(5, 3) << endl;
    cout << "Int Multiply: " << intCalc.multiply(5, 3) << endl;

    Calculator<float> floatCalc;
    cout << "Float Add: " << floatCalc.add(5.5f, 3.3f) << endl;
    cout << "Float Multiply: " << floatCalc.multiply(5.5f, 3.3f) << endl;

    return 0;
}
