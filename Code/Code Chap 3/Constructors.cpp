#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

protected:
    string engineNumber;

public:
    static int numberOfCars;

    // Default constructor
    Car() {
        brand = "Unknown";
        year = 0;
        engineNumber = "N/A";
        numberOfCars++;
    }

    // Parameterized constructor
    Car(string b, int y, string e) {
        brand = b;
        year = y;
        engineNumber = e;
        numberOfCars++;
    }

    // Copy constructor
    Car(const Car &c) {
        brand = c.brand;
        year = c.year;
        engineNumber = c.engineNumber;
        numberOfCars++;
    }

    // Getter and Setter for brand
    void setBrand(string b) { brand = b; }
    string getBrand() { return brand; }

    // Getter and Setter for year
    void setYear(int y) { year = y; }
    int getYear() { return year; }

    // Getter and Setter for engineNumber
    void setEngineNumber(string e) { engineNumber = e; }
    string getEngineNumber() { return engineNumber; }

    // Static function to get number of cars
    static int getNumberOfCars() { return numberOfCars; }

    // Friend function declaration
    friend void compareCars(Car c1, Car c2);
};

// Initialize static member
int Car::numberOfCars = 0;

// Friend function definition
void compareCars(Car c1, Car c2) {
    if (c1.year < c2.year)
        cout << c1.brand << " is older than " << c2.brand << endl;
    else if (c1.year > c2.year)
        cout << c2.brand << " is older than " << c1.brand << endl;
    else
        cout << "Both cars are from the same year." << endl;
}

int main() {
    Car car1;  // Default constructor
    Car car2("Toyota", 2010, "ENG12345");  // Parameterized constructor
    Car car3 = car2;  // Copy constructor

    car1.setBrand("Honda");
    car1.setYear(2005);
    car1.setEngineNumber("ENG54321");

    cout << "Car1: " << car1.getBrand() << ", " << car1.getYear() << ", " << car1.getEngineNumber() << endl;
    cout << "Car2: " << car2.getBrand() << ", " << car2.getYear() << ", " << car2.getEngineNumber() << endl;
    cout << "Car3: " << car3.getBrand() << ", " << car3.getYear() << ", " << car3.getEngineNumber() << endl;

    cout << "Total cars created: " << Car::getNumberOfCars() << endl;

    compareCars(car1, car2);

    return 0;
}
