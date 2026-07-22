#include <iostream>
using namespace std;

void display(int a, int b=10, int c=20)
{
    cout<<"a: "<<a <<", b: "<<b <<", c: "<<c<<endl;
}
/*
    Default values must be assigned from right to left
    You cannot skip a default argument in the middle
*/
int main()
{
    display(1); // here b = 10,  c= 20 default value will be display
    display(1,5); // here c = 20 default value will be display
    display(1,5,8); // all provided value are displayed
}