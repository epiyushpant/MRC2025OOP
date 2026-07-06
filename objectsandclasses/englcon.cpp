//englcon.cpp
//constructors,adds objects using member function
#include<iostream>
using namespace std;

class Distance      //English distance class
{
private:
    int feet;
    float inches;
public:
    Distance():feet(0),inches(0) //constructor no args
    { }
    Distance (int ft, float in):feet(ft),inches(in)
    { }
    void getdist()
    {
        cout<<"\nEnter feet:";cin>>feet;
        cout<<"\nEnter inches:",cin>>inches;
    }
    void showdist() //display distance
    {
        cout<<feet<<"\"-"<<inches<<"\"";
    }
    void add_dist(Distance ,Distance); //declaration
};
//add length d2 and d3
void Distance :: add_dist(Distance d2,Distance d3)
{
    inches = d2.inches+d3.inches; //adds inches
    feet=0;
    if(inches >=12.0) //if total exceeds 12.0
    {                   //then decrease inches
        inches -=12;    //by 12
        feet++;          //and increase feet 
    }    //by 1
     feet+=d2.feet+d3.feet; //add the feet   
}
int main()
{
    Distance dist1,dist3;//define two length
    Distance dist2(12,16.5); //define and initialize d2

    dist1.getdist(); //get dist1 from user
    dist3.add_dist(dist1,dist2); //d3=dist1+dist2

    cout<<"\ndist1=";dist1.showdist();
    cout<<"\ndist2=";dist2.showdist();
    cout<<"\ndist3=";dist3.showdist();
    cout<<endl;
    return 0;
}