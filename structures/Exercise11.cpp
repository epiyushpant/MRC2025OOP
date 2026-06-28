/*add two times in 12:59:59 format and add them*/
#include<iostream>
using namespace std;
struct Time{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
    Time t1,t2,t3;
    char ch;
    cout<<"Enter first time in 12:59:59 format:";
    cin>>t1.hours>>ch>>t1.minutes>>ch>>t1.seconds;

    cout<<"Enter second time in 12:59:59 format:";
    cin>>t2.hours>>ch>>t2.minutes>>ch>>t2.seconds;
    int sec1=t1.hours*3600+t1.minutes*60+t1.seconds;
    int sec2=t2.hours*3600+t2.minutes*60+t2.seconds;

    int totalseconds=sec1+sec2;
    t3.hours =totalseconds/3600;
    totalseconds %=3600;
    t3.minutes = totalseconds / 60;
    t3.seconds = totalseconds%60;
    cout<<t3.hours<<":"<<t3.minutes<<":"<<t3.seconds;
    return 0;
}