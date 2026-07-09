#include <iostream>
using namespace std;

int main()
{
    /*
        Q. 7 
        You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
        by 9/5 and adding 32. Write a program that allows the user to enter a floating-point number
        representing degrees Celsius, and then displays the corresponding degrees
        Fahrenheit.
    */
     
    float val;
    float result;
     

    cout<<"Temperature Convertion Toos"<<endl;
    cout<<"----------------------------"<<endl<<endl;
    
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>val;
    result = (val -32) * 5/9;
    cout<<"In Celsius that's "<< result<<endl;
     
    cout<<"Enter temperature in Celsius: ";
    cin>>val;
    result = (val * 9/5) + 32;
    cout<<"In Fahrenheit that's "<< result<<endl;
     
}
