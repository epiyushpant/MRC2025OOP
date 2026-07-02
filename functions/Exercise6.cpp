/*Start with the program from Exercise 11 in chapter 4 "Structures " which adds two struct time values.
keep the same functionality,but modify the program so that it uses two function,
The first time_to_secs(),takes as its only argument as structure of type tikme and returns equivalent
time in seconds type long .the second function secs_to_time takes as its only argument a time 
in seconds type long and returns a structure of type time
*/
#include<iostream>
using namespace std;
struct Time{
    int hour;
    int minute;
    int seconds;
};
long time_to_secs(Time,Time);
Time secs_to_time(long);
int main()
{
    Time T1,T2,T3;
    char ch;
    long Totalseconds;
    cout<<"Enter time in 12:59:59 format:";
    cin>>T1.hour>>ch>>T1.minute>>ch>>T1.seconds;
    cout<<"Enter second time in 12:59:59 format:";
    cin>>T2.hour>>ch>>T2.minute>>ch>>T2.seconds;
    cout<<time_to_secs(T1,T2);
    cout<<"\nEnter Total seconds:";
    cin>>Totalseconds;
    T3=secs_to_time(Totalseconds);
    cout<<T3.hour<<ch<<T3.minute<<ch<<T3.seconds;
    return 0;
}
long time_to_secs(Time TT1,Time TT2)
{
    long secs=(TT1.hour+TT2.hour)*3600 + (TT1.minute+TT2.minute)*60+TT1.seconds+TT2.seconds;
    return secs;
}
Time secs_to_time(long Totalseconds)
{
    Time result;
    result.hour =Totalseconds/3600;
    result.minute=(Totalseconds%3600)/60;
    result.seconds =Totalseconds%60;
    return result;
}