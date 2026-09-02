// Practical 2: Create and apply a function template
// Compile: g++ 02_function_template.cpp -o 02_function_template

#include <iostream>
using namespace std;

// T is a blank for a type (int, float, double, ...)
template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T getMax(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    cout << "int add    : " << add(10, 20) << endl;
    cout << "float add  : " << add(2.5f, 3.5f) << endl;
    cout << "double add : " << add(1.11, 2.22) << endl;

    cout << "max of 8, 3     : " << getMax(8, 3) << endl;
    cout << "max of A, Z     : " << getMax('A', 'Z') << endl;
    return 0;
}
