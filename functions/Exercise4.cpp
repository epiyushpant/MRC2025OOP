/*Write a function that takes two distance values as arguments and returns a larger one .INclude a main()
program that accepts two Distances values form user,compares them and displays the larger(see RETSTRC 
programs for hints)*/
#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
Distance larger(Distance, Distance);
void engldisp(Distance);
int main()
{
    Distance d1,d2,d3;
    cout<<"Enter first feet:";
    cin>>d1.feet;
    cout<<"Enter first inches:";
    cin>>d1.inches;
    cout<<"Enter second feet:";
    cin>>d2.feet;
    cout<<"Enter second inches";
    cin>>d2.inches;
    d3=larger(d1,d2);
    engldisp(d3);
    return 0;
}
Distance larger(Distance dd1, Distance dd2)
{
    if((dd1.feet*12+dd1.inches)>(dd2.feet*12+dd2.inches))
    {
        return dd1;
    }
    else 
    {
        return dd2;
    }
}
void engldisp(Distance dd)
{
    cout<<dd.feet<<"\'-"<<dd.inches<<"\"";
}