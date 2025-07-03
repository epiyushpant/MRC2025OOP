#include <iostream>

using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;  // Base case
    return n * factorial(n - 1);     // Recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is: " << factorial(num) << "\n";
    return 0;
}

/*

Recursion is a programming technique where a function calls itself to solve smaller instances of a problem. 
In C++, recursive functions are widely used for problems that can be broken down into repetitive subproblems,
 such as factorial computation, Fibonacci sequences, and tree traversals.

 */