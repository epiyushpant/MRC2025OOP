//convert2.cpp
//eliminates unnecessary variables
#include<iostream>
using namespace std;
float lbstokg(float);
int main()
{
    float lbs;
    cout<<"Enter your weight in pounds";
    cin>>lbs;
    cout<<"Your weight is "<<lbstokg(lbs);
    return 0;
}
float lbstokg(float pounds)
{
    return 0.453592*pounds;
}