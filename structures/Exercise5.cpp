/*Create a structure of type date that contains three members ,the month
the day of the month and year all of type int (or use day-month-year order if you prefer)
Have tehr user enter a date in the format 12/31/2001 store in a variable of type struct date ,then retrieve
the values from the variable and pring them in the same form*/
#include<iostream>
using namespace std;
struct date{
    int day;
    int month;
    int year;
};
int main()
{
    date Date;
    char ch;
    cout<<"Enter your date in d-m-y format";
    cin>>Date.day>>ch>>Date.month>>ch>>Date.year;
    cout<<Date.day<<ch<<Date.month<<ch<<Date.year;
    return 0;
}