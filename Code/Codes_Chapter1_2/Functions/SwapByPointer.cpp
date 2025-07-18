#include <iostream>
using namespace std;

void swapByPointer(int *a, int *b) {
   
    int temp = *a;
    cout << "Before swap (Pass by Pointer : Address): &a = " << a << ", &b = " << b << endl;
    cout << "Before swap (Pass by Pointer : Value): *a = " << *a << ", *b = " << *b << endl;
    cout<< temp << endl;
    *a = *b;
    *b = temp;
    cout << "Inside function (Pass by Pointer): a = " << *a << ", b = " << *b << endl;
}

int main() {
    int x = 5, y = 10;
    swapByPointer(&x, &y);
    cout << "After function call: x = " << x << ", y = " << y << endl;
    return 0;
}




