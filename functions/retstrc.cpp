//retstrc.cpp
//demonstrates returning of structures
#include<iostream>
using namespace std;
struct Distance{            //English distance
int feet;
float inches;
};
Distance addengl(Distance,Distance); //declaration for adding function
void engldisp(Distance); //declaration for displaying function

int main() 
{
    Distance d1,d2,d3; //define three length
    //Get length d1 from user
    cout<<"Enter feet:";cin>>d1.feet;
    cout<<"Enter inches:";cin>>d1.inches;
    //Get length d2 from user
    cout<<"Enter feet:";cin>>d2.feet;
    cout<<"Enter inches:";cin>>d2.inches;

    d3=addengl(d1,d2); //d3 is sum of d1 and d2
    cout<<endl;
    engldisp(d1);cout<<"+";//display all length
    engldisp(d2);cout<<"="; 
    engldisp(d3);cout<<endl;
    return 0;
}
//addengl()
//adds two structures of type Distance,returns sum
Distance addengl(Distance dd1,Distance dd2)
{
    Distance dd3;//define new structure for sum
    dd3.inches = dd1.inches + dd2.inches;
    dd3.feet=0; //for possible carry
    if(dd3.inches >= 12)
    {
        dd3.inches -= 12;
        dd3.feet++;
    }
    dd3.feet += dd1.feet+dd2.feet;
    return dd3;
}
//engldisp
//display structure of type distance in feet and inches
void engldisp(Distance dd)
{
    cout<<dd.feet<<"\'-"<<dd.inches<<"\"";
}