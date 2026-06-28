//dayenum.cpp
//demonstrates enum types
#include<iostream>
using namespace std;
//specifying enum type
enum days_of_week{ sun , mon, tue,wed,thu,fri,sat}; //specify enum type

int main()
{
    days_of_week day1,day2;// define variable of type days_of_week
    day1 = mon;
    day2 = thu;

    int diff = day2-day1;
    cout<<"Days between =" <<diff <<endl;
    
    if(day1<day2)
    {
    cout<<"Day 1 comes before day 2\n";
    }
    return 0;
}