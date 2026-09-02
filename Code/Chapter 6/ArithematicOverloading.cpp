//Arithmetic operator overloading is a feature in C++ that allows programmers to redefine the
// meaning of arithmetic operators (+, -, *, /, %) for user-defined data types (classes). 
//This enables objects of these classes to participate in arithmetic expressions similarly to fundamental data types.


#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Addition: (a + bi) + (c + di) = (a+c) + (b+d)i
    //a + b → a.operator+(b)

    Complex operator+(const Complex& c) const {
        return Complex(real + c.real, imag + c.imag);
    }

    // Subtraction: (a + bi) - (c + di) = (a-c) + (b-d)i
    Complex operator-(const Complex& c) const {
        return Complex(real - c.real, imag - c.imag);
    }

    // Multiplication: (a + bi)(c + di) = (ac - bd) + (ad + bc)i
    Complex operator*(const Complex& c) const {
        double r = real * c.real - imag * c.imag; // real part
        double i = real * c.imag + imag * c.real; // imaginary part
        return Complex(r, i);
    }

    // Division:
    // (a + bi) / (c + di) = [(ac + bd) + (bc - ad)i] / (c^2 + d^2)
    Complex operator/(const Complex& c) const {
        double denominator = c.real * c.real + c.imag * c.imag;
        if (denominator == 0) {
            cout << "Division by zero error" << endl;
            return Complex(0, 0);
        }
        double r = (real * c.real + imag * c.imag) / denominator;    // real part
        double i = (imag * c.real - real * c.imag) / denominator;    // imaginary part
        return Complex(r, i);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(4, 5);
    Complex c2(2, 3);

    Complex c3 = c1 + c2;  // (4+2) + (5+3)i = 6 + 8i
    c3.display();

    Complex c4 = c1 - c2;  // (4-2) + (5-3)i = 2 + 2i
    c4.display();

    Complex c5 = c1 * c2;  // (4*2 - 5*3) + (4*3 + 5*2)i = -7 + 22i
    c5.display();

    Complex c6 = c1 / c2;  // [(4*2 + 5*3) + (5*2 - 4*3)i] / (2^2 + 3^2) = 1.61538 + 0.153846i
    c6.display();

    return 0;
}
