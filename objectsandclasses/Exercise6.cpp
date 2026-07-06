/*Extend the employee class of Exercise 4 to include a date class and an etype enum .An object of the date class 
should be used to hold the data of first employee That is the date when employee was hired, The etype variable should
hold the employee type :labourer,secratary ,manager and so on These two items will be private member date in the employee
definition, just like the employee number and salary you'll need to extend get employee() and put employee functions to obtain 
new information from user and display it .These functions will probably need switch statements to handle etype variable .
write a main() program that allows user to enter data for three employee variables and then display this data*/
#include<iostream>
using namespace std;
enum etype{labourer,manager,secratary};
class Date
{
    private:
        int month;
        int day;
        int year;
    public:
        Date():month(0),day(0),year(0)
        { }
        Date(int m,int d, int y):month(m),day(d),year(y)
        { }
        void read()
        {
            char ch;
            cout<<"Enter date:";
            cin>>month>>ch>>day>>ch>>year;
        }
        void disp()
        {
            cout<<month<<"/"<<day<<"/"<<year;
        }
};
class Employee
{
    private:
        Date date;
        etype emptype;
    public:
        Employee():date(),emptype()
        { }
        Employee(Date d, etype e):date(d),emptype(e)
        { }
        void put(){
        int choice;
        date.read();
        cout<<"Enter emp position:";
        cin>>choice;
        emptype=static_cast<etype>(choice);
       
    }
    void get() 
    {  
        date.disp();
        cout<<" ";
    switch(emptype)
        {
            case labourer:
            cout<<"labourer";
            break;
            case manager:
            cout<<"manager";
            break;
            case secratary:
            cout<<"secratary";
            break; 
        }
       cout<<endl;
    }
};
int main()
{
    Employee e1,e2,e3;
    e1.put();
    e2.put();
    e3.put();

    e1.get();
    e2.get();
    e3.get();


    return 0;
}
