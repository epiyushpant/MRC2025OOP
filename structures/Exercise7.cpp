#include<iostream>
using namespace std;
enum etype{emp_num,emp_com,emp_type};
struct date{
    int day;
    int month;
    int year;
};
int main()
{
    int n1,n2,n3;
    float c1,c2,c3;
    char ch1[10],ch2[10],ch3[10];
    etype e1,e2,e3;
    e1=emp_num;
    e2=emp_com;
    e3=emp_type;
    date D1,D2,D3;
    char ch;
    cout<<"Enter employmentdate of first employeer:";
    cin>>D1.day>>ch>>D1.month>>ch>>D1.year;
    cout<<"\nEnter employment date of second employee:";
    cin>>D2.day>>ch>>D2.month>>ch>>D2.year;
    cout<<"\nEnter employment date of third employeer:";
    cin>>D3.day>>ch>>D3.month>>ch>>D3.year;
    switch(e1)
    {
        case 0:
        cout<<"\nEnter Employee number of first employee:";
        cin>>n1;
        cout<<"\nEnter Employee number of second employee:";
        cin>>n2;
        cout<<"\nEnter Employee number of third employee:";
        cin>>n3;  
    }
    switch(e2)
    {
        case 1:
        cout<<"Enter 1st Employee compensation:";
        cin>>c1;
        cout<<"\nEnter 2nd Employee  copensation";
        cin>>c2;
        cout<<"\nEnter 3rd Employee compensation";
        cin>>c3;
    }
    switch(e3)
    {
        case 2:
        cout<<"\nEnter 1st employee type";
        cin>>ch1;
        cout<<"\nEnter 2nd employee type";
        cin>>ch2;
        cout<<"\nEnter 3rd employee type";
        cin>>ch3;
    }
    cout<<"First Employee information:";
    cout<<n1 <<" "<< c1<<" "<<ch1<<" " <<D1.day<<ch<<D1.month<<ch<<D1.year;
    cout<<"\nSecond Employee information:";
    cout<<n2<<" "<<c2<<" "<<ch2<<" "<<D2.day<<ch<<D2.month<<ch<<D2.year;
    cout<<"\nThird employee information:";
    cout<<n3<<" "<<c3<<" "<<ch3<<" "<<D3.day<<ch<<D3.month<<ch<<D3.year;

    return 0;
}