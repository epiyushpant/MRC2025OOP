#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "enter two numbers: ";
    cin >> a;
    cout << "enter second number: ";
    cin >>b;
    if(a>b)
    {
        cout << a << " is greater than " << b;
    }
    else if(b>a)
    {
        cout << b << " is greater than " << a;
    }
    else
    {
        cout << "Both numbers are equal.";
    }
    return 0;
}   