//Using conversion operator to convert Fahrenheit to Celsius
// Approach 2 conversion operator
// This approach uses a conversion operator in the source class to convert from one user-defined type to
//A conversion operator in the source class

#include <iostream>
using namespace std;

class Celsius {
private:
    float temp;
public:
    Celsius(float t = 0) {
        temp = t;
    }

    void display() {
        cout << "Temperature in Celsius: " << temp << "°C" << endl;
    }
};

class Fahrenheit {
private:
    float temp;
public:
    Fahrenheit(float t = 0) {
        temp = t;
    }

    // Conversion operator: Fahrenheit -> Celsius // in source class means in ferhenhite class 
    operator Celsius() {
        float c = (temp - 32) * 5.0 / 9;
        return Celsius(c);
    }
};

int main() {
    Fahrenheit f(98.6);

    // Convert Fahrenheit to Celsius
    Celsius c = f;

    c.display();

    return 0;
}
