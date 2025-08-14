// C++ program to demonstrate
// prefix increment operator overloading

#include <iostream>
using namespace std;

class Integer {
private:
    int i;

public:
    // Parameterised constructor
    Integer(int i = 0)
    {
        this->i = i;
    }

    // Overloading the prefix operator
    Integer& operator++()
    {
        ++i;
        // returned value should be a reference to *this
        return *this;
    }

    // Function to display the value of i
    void display()
    {
        cout << "i = " << i << endl;
    }
};

// Driver function
int main()
{
    Integer i1(3);

    cout << "Before increment: ";
    i1.display();

    // Using the pre-increment operator
    Integer i2 = ++i1;

    cout << "After pre increment: " << endl;
    cout << "i1: ";
    i1.display();
    cout << "i2: ";  
    i2.display();
}