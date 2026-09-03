#include <iostream>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    std::cout <<" Enter a number: ";
    std::cin >> number;

    if (isPrime(number))
        std::cout << number << " is a prime number.\n";
    else
        std::cout << number << " is not a prime number.\n";

    return 0;
}


