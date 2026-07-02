//engldisp.cpp
//demonstrates entire structure passed as argument
#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};
void engldisp(Distance); //declaration
int main() 
{
    Distance d1,d2;
    cout<<"Enter first feet:";
    cin>>d1.feet;
    cout<<"Enter first inches:";
    cin>>d1.inches;
    cout<<"\nEnter second feet:";
    cin>>d2.feet;
    cout<<"Ener second inches:";
    cin>>d2.inches;
    cout<<"\nd1=";
    engldisp(d1);
    cout<<"\nd2=";
    engldisp(d2);
    return 0;
}
void engldisp(Distance dd)
{
    cout<<dd.feet<<"\'-"<<dd.inches<<"\" ";
}