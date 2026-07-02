/*Write a function called hms_to_secs() that takes three int values for hours,minutesand seconds
as arguments return equivalent time in seconds (type long) create a program that exercises this function by repeatedly obtaining a time value 
in hours ,minutes and seconds from the user(format 12:59:59)calling the function and displaying the value of seconds it returns*/
#include<iostream>
using namespace std;
#include<conio.h>

long hms_to_seconds(int h,int m,int s);
int main()
{ 
    int hour;
    int minute;
    int second;
    char ch;
    
    do{
        cout<<"Enter Time";
        cin>>hour>>ch>>minute>>ch>>second;
        cout<<hms_to_seconds(hour,minute,second);
        cout<<"\nEnter any key to get another time";
    }while((ch=getche())!='\r');
    return 0;
}
long hms_to_seconds(int h,int m,int s)
{
long seconds=h*3600+m*60+s;
return seconds;
}