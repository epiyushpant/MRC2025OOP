#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        if (a > 0)
            age = a;
    }

    // Getter functions
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Student s;
    s.setName("Aayush");
    s.setAge(20);

    cout << "Name: " << s.getName() << endl;
    cout << "Age: " << s.getAge() << endl;

    return 0;
}

// Encapsulation in C++ is the bundling of data and methods that operate on that data within a single unit, or class.
// It restricts direct access to some of an object's components, which is a means of preventing unintended interference and misuse of the methods and data.
// Encapsulation is achieved using access specifiers: public, private, and protected.
// It allows for data hiding, which is a fundamental principle of object-oriented programming.
// Encapsulation is used to protect the integrity of the data and to hide the internal state of an object from the outside world.
// It is a key feature of object-oriented programming that promotes modularity and maintainability of code
