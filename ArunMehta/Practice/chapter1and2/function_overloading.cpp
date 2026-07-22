#include <iostream>
using namespace std;

/*
    Function overloading means having multiple functions with same name 
    but different parameter list(number, types, or both).

    purpose:
    - improves code readability.
    - Helps perform similar operations for different data types
*/

int add (int a, int b){
    return a + b;
}
float add(float a, float b){
    return a + b;
}
int add(int a, int b, int c){
    return a + b + c;
}

int main()
{
    int result1, result3;
    float result2;
    result1 = add(3,4); // call int version function
    result2 = add(2.5f,56.3f); // call float version function
    result3 = add(1,2,3); // call 3 parameter version

    cout <<"2 parameter int function: " << result1<<endl;
    cout << "2 parameter float function: " << result2<<endl;
    cout << "3 parameter int function: " << result3 << endl;

    return 0;
}
