/*enter time and get it's total seconds in any format*/
#include<iostream>
using namespace std;
struct Time{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
    Time t1;
    cout<<"Enter hours:";
    cin>>t1.hours;
    cout<<"Enter minutes less than 60:";
    cin>>t1.minutes;
    cout<<"Enter seconds less than 60:";
    cin>>t1.seconds;
    //as we've seen in englstrc program
    long secs=t1.hours*3600+t1.minutes*60+t1.seconds;
    cout<<"Total seconds"<<secs;
    return 0;
}
