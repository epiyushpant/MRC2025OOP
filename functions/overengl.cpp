//overengl.cpp
//demonstrates overload functions
#include<iostream>
using namespace std;

struct Distance{
    int feet ;
    float inches;
};

void engldisp(Distance);
void engldisp(float);

int main()
{
    Distance d1; //d1 of type distance
    float d2; //d2 of type float
    //get values of d1 and d2
    cout<<"\nEnter feet:";cin>>d1.feet;
    cout<<"Enter inches:";cin>>d1.inches;

    cout<<"Enter value of d2 all in inches:";cin>>d2;
    //display the result
    cout<<"d1=";
    engldisp(d1);
    cout<<endl;
    cout<<"d2=";
    engldisp(d2);
return 0;
}
void engldisp(Distance dd)
{
    cout<<dd.feet<<"\'-"<<dd.inches<<"\"";
}
void engldisp(float dd)
{
    int feet=static_cast<int>(dd/12);
    float inches = dd-feet*12;
    cout<<feet<<"\"-"<<inches<<"\"";
}