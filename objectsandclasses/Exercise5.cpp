/*start with date structue in Exercise 5 in chapter 4 and transform it into a date class .Its member 
data should consist of three int;month,day and year.It should also have two member function :getdata() 
which allows user to enter a data in 12/31/02 fromat and showdate() ,which displays the data*/
#include<iostream>
using namespace std;

class Date
{
    private:
        int month;
        int day;
        int year;
    public:
        Date():month(0),day(0),year(0)
        { }
        Date(int m,int d , int y):month(m),day(d),year(y)
        { }
    void get()
    {
        char ch;
        cout<<"Enter month,day and year"; 
        cin>>month>>ch>>day>>ch>>year;
    }
    void display()
    {
        cout<<month<<"/"<<day<<"/"<<year;
    }
};
int main()
{
    Date d1;

    d1.get();

    d1.display();

    return 0;
}