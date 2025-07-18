#include <iostream>

int main() {
    int n, factorial = 1;

    std::cout << "Enter a number: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;  // Multiply each number to get the factorial
    }

    std::cout << "Factorial of " << n << " is: " << factorial << "\n";
    return 0;
}



/*    

   int i = 1;

   while (i <= n) {
        factorial *= i;
        i++;
    }

do {
    factorial *= i;
    i++;
} while (i <= n);


*/


/*  using recursion 

#include <iostream>

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;  // Base case
    return n * factorial(n - 1);     // Recursive call
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Factorial of " << num << " is: " << factorial(num) << "\n";
    return 0;
}


*/
