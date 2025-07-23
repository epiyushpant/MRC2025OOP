// Friend function simple example 


#include <iostream>
using namespace std;    

class Box {
private:
    int length;

public:
    Box(int l){
        length = l;
    }

    // Declare a friend function
    friend void printLength(Box &b);
};


// Friend function definition
void printLength(Box &b) {
    cout << "Length of box: " << b.length << endl;
}



int main() {
    Box box1(10);
    printLength(box1);  // Call the friend function
    return 0;
}

