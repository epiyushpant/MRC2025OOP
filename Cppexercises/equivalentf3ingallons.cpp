//Assuming there are 7.481 gallons in a cubic feet, WAP that asks the user to enter no of gallons and display the equivalent in cubic feet

#include<iostream>
using namespace std;
int main() 
{
    float gallons;//float 
    float cubic_feet ; //float
    cout<<"Enter number of gallons" << endl;
    cin >> gallons;
    cubic_feet = gallons/7.841;
    cout<<"equivalent cubic_feet=" << cubic_feet << endl;
    return 0;

}