#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;

public:
    static int count;

    // Default constructor 
    Car() {
        brand = "Unknown";
        model = "Generic";
        count++;
    }

    // Parameterized constructor 
    Car(string b, string m) {
        brand = b;
        model = m;
        count++;
    }

    // Copy constructor
    Car(const Car& other) {
        brand = other.brand;
        model = other.model;
        count++;  // Treat copied car as a new car for count
        cout << "[Copy Constructor Called]\n";
    }

    void display() const {
        cout << "Brand: " << brand << ", Model: " << model << endl;
    }

    friend void showBrand(const Car &c);
};

// Initialize static member
int Car::count = 0;

// Friend function definition
void showBrand(const Car& c) {
    cout << "[Friend] Brand is: " << c.brand << endl;
}

int main() {
    Car c1;
    Car c2("Hyundai", "Elantra");

    Car c3 = c2;  // Calls the copy constructor

    c1.display();
    c2.display();
    c3.display();

    showBrand(c2);

    cout << "Total cars created: " << Car::count << endl;
    return 0;
}
