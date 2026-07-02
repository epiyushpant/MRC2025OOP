/*Repeat Exercise 8,but instead of two int variables have the swap function
interchange two struct time values(see Exercise 6)*/
#include<iostream>
using namespace std;
struct Time{
    int hour;
    int minute;
    int second;
};
void swap(Time&,Time&);
int main() 
{
    Time t1,t2;
    char ch;
    cout<<"Enter 1st time:";
    cin>>t1.hour>>ch>>t1.minute>>ch>>t1.second;

    cout<<"Enter 2nd time:";
    cin>>t2.hour>>ch>>t2.minute>>ch>>t2.second;
    swap(t1,t2);
    cout<<"New:"<<t1.hour<<ch<<t1.minute<<ch<<t1.second<<endl;
    cout<<t2.hour<<ch<<t2.minute<<ch<<t2.second<<endl;
    return 0;
}
void swap(Time& TT1,Time& TT2)
{
    Time temp=TT1;
    TT1=TT2;
    TT2=temp;
}