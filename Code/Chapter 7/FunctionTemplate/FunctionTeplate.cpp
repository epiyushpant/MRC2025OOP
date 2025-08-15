//A function template allows a function to operate with generic types. 
//It works with any data type (int, float, string, etc.).


// A function template allows writing a single function that can work with different data types.
// Instead of writing separate functions for int, float, double, etc., 
// you define one generic function using a template.

#include <iostream>
using namespace std;

template <typename T>

T add(T a, T b , T c = 2) {
    return a + b + c;
}

int main() {
    cout << "Int Add: " << add(5, 3  ) << endl;
    cout << "Float Add: " << add(4.2f, 1.8f , 3.2f) << endl;
    cout << "Double Add: " << add(3.5, 2.1 , 2.3 ) << endl;
    return 0;
}
