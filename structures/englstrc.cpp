//englstrc.cpp
//Demonstrates structure using English measurements
//shows error if small d in distance is used ambigious error
#include<iostream>
using namespace std;

struct Distance //English distance
{
int feet;
float inches;
};

int main() 
{
    Distance d1,d3; //make two variables of type distance
    Distance d2 ={11,6.25}; //define and initialilze one length
    
    cout<<"\nEnter feet:"; cin>>d1.feet;
    cout<<"Enter Inches:"; cin>>d1.inches;
    //add d1 and d2 to get d3
    d3.inches = d1.inches+d2.inches;//adding d1inches and d2 inches
    d3.feet = 0; //for possible carry
    if(d3.inches >=12.0) //if total exceeds 12.0
    {
        d3.inches -= 12; //for any inches left
        d3.feet ++;
    }
    d3.feet=d1.feet+d2.feet; //add the feet
    cout<<d1.feet<<"\' -" <<d1.inches<<"\" +";
    cout<<d2.feet<<"\' -" <<d2.inches<<"\" =";
    cout<<d3.feet<<"\' -" <<d3.inches<<"\"\n";
    return 0;
}