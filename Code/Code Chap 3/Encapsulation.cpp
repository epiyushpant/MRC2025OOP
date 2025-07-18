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
