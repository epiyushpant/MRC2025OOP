#include <iostream>
using namespace std;

/*
    - Passing arguments by reference means the function works on the original variables,
    not on their copies.

    - Reference arguments allow a function modify the original variables by passing
    them by reference (using &).
    
    * Declared using the & symbol in the function parameter.
    * No copy is made; the function works with the original variable.
    * Useful for modifying values or improving performance.
    
    When to use:
    ----------
    When you want the function to change the actual value.
    When you want to avoid copying large data (like arrays or objects) 
    
*/
void swap(int &a, int &b)
{
    int temp = a;

    a = b;
    b = temp;
}

int main(){
    int x = 5, y = 10;
    cout <<"x: "<<x<<" y: "<<y<<endl;

    swap(x,y);
    cout <<"x: "<<x<<" y: "<<y<<endl;
}