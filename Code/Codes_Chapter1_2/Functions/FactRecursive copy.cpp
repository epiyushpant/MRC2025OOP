#include <iostream>
using namespace std;

// int fibonacci(int n) {
//     if (n <= 1) // Base cases
//         return n;
//     else
     
//         return fibonacci(n - 1) + fibonacci(n - 2); // Recursive calls
// }

// int main() {
//     int num = 7;
//     cout << "Fibonacci number at position " << num << " is: " << fibonacci(num) << endl;
//     return 0;
// }




// void printFibonacci(int n, int a = 0, int b = 1) {
//     if (n > 0) {
//         cout << a << " ";
//         cout << b << " " <<endl;// Print the first two Fibonacci numbers
//         printFibonacci(n - 1, b, a + b); // Recursive call with updated values
//     }
// }

// int main() {
//     int num = 5;
//     // cout << "Fibonacci series up to " << num << " terms:\n";
//     printFibonacci(num);
//     return 0;
// }


void fibo(int n ,int a=0,int b=1){
    if(n>0){
        cout<<a<<"";
        fibo(n-1,b,a+b); // 0 1
    }
}
int main(){
    int n=5;
    fibo(n);

}