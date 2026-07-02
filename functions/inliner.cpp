//inliner.cpp
//demonstrates inline functions
#include<iostream>
using namespace std;
float lbstokg(float pounds)
{
    return 0.45359237*pounds;
}
int main()
{
    float lbs;
    cout<<"Enter your weight in pounds:";
    cin>>lbs;
    cout<<"Your weight in kg is"<<lbstokg(lbs)<<endl;
    return 0;
}