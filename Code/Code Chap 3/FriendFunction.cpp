// Friend function simple example 
/*
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

*/
#include <iostream>
using namespace std;

class Bank {
private:
    int balance;

public:
    Bank(int b) {
        balance = b;
    }

    friend void showBalance(Bank &b);
};

void showBalance(Bank &b) {
    cout << "Balance: " << b.balance << endl;
}

int main() {
    Bank account(5000);

    showBalance(account);

    return 0;
}