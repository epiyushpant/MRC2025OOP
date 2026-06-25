/*convert celsius to fahrenheit or fahrenheit to celsius*/
#include<iostream>
using namespace std;
int main()
{
    float celsius,fahrenheit;
    int ans;
    cout<<"Type 1 To convert fahrenheit to celsius\n"
        <<"\t 2 to convert celsius to fahrenheit";
        cin>>ans;
    if(ans == 1){
        cout<<"Enter temperature in fahrenheit:";cin>>fahrenheit;
        celsius = (fahrenheit-32)*5/9;
        cout<<"\nIn celsius thats"<<celsius<<endl;
    }
    else if(ans == 2)
    {
        cout<<"Enter temperature in celsius:",cin>>celsius;
        fahrenheit=(celsius*9/5)+32;
        cout<<"\nIn celsius that's"<<fahrenheit<<endl;
    }
    else 
    {
        cout<<"Chhose between 1 and 2";
    }
    return 0;
}