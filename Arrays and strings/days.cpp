//days.cpp
//shows days rom start of year to date specified
#include<iostream>
using namespace std;
int main()
{
    int month,days,total_days;
    int days_per_month[12]= {31,28,31,30,31,30,
                            31,31,30,31,30,31};
    cout<<"Enter which month is running (1 to 12) ";
    cin>>month;
    cout<<"Enter days (1 to 31)";
    cin>>days;
    total_days=days;
    for(int j=0;j<month-1;j++)
    { 
        total_days +=days_per_month[j];
    }
    cout<<"Total days from the start of year is :"<<total_days<<endl;
    return 0;
}