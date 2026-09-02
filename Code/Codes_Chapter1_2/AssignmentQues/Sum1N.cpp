#include <iostream>

int main() {
    int n, sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;  // Adding each number to the total sum
    }

    std::cout << "Sum of numbers from 1 to " << n << " is: " << sum << "\n";
    return 0;
}
