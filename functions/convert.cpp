//convert.cpp
//demonstrates return values ,converts pounds to kg
#include<iostream>
using namespace std;
float lbstokg(float); //declaration
int main()
{
    float lbs,kg;
    cout<<"Enter weight in pounds";
    cin>>lbs;
    kg=lbstokg(lbs);
    cout<<"Your weight in kg's is:"
    <<kg;
    return 0;
}
float lbstokg(float lbs)
{
    float kilograms=lbs*0.453592;
    return kilograms;
}