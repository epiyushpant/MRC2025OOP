/*Create a class called time that has separate int member data for hours, minutes and seconds.One constructor should initialize thils data to 0
and another should initialize it to fixed values.Another member function should display it in 11:59:59 format
The finsl member function should add two objects of tyhpe time passed as argument

A main() program should create two initialized time objects(should they be const?) and one that isn't initialized.Then it should
add the two initialilzed values together leaving the result in the third time variable .finally it should display
the value of third variable .Make appropriate member functions const*/
#include<iostream>
using namespace std;

class Time
{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time():hour(0),minute(0),second(0)
        { }
        Time(int h,int m , int s): hour(h),minute(m),second(s)
        { }
        void display()  const
        {
            cout<<hour<<":"<<minute<<":"<<second;
            cout<<endl;
        }
        Time add(Time t1,Time t2);
};
Time Time::add(Time t1, Time t2)
{
    Time t3;
    t3.hour=t1.hour+t2.hour;
    if(t3.hour>11)
    {hour -=12;}
    t3.minute=t1.minute+t2.minute;
    if(t3.minute>59)
    {
        t3.hour++;
        t3.minute -=60;
    }
    t3.second = t1.second+t2.second;
        if(t3.second>59)
        {
            t3.minute++;
            t3.second -=60;
        }
    return t3;
}
int main()
{
    const Time tt1(1,2,3);
    const Time tt2(2,3,4);
    Time tt3;
    tt3=tt3.add(tt1,tt2);
    tt3.display();
    return 0;
}