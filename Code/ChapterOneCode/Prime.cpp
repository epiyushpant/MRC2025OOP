#include <iostream>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}


using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number.\n";
    else
        cout << number << " is not a prime number.\n";

    return 0;
}


