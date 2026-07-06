//ecopycon.cpp
//initialize objects using default copy constructor
#include<iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance():feet(0),inches(0.0)
        { }
        Distance(int ft ,float in) : feet(ft),inches(in)
        { }
    void getdist() //get length from user
    {
        cout<<"\nEnter feet:"; cin>>feet;
        cout<<"\nEnter inches:"; cin>>inches;
    }
    void show_dist() //display distance
    {
        cout<<feet<<"\"-"<<inches<<"\"";
    }
};
int main()
{
    Distance dist1(11,6.25);
    Distance dist2(dist1); //one-arg constructor
    Distance dist3=dist1;

    cout<<"\ndist1=";dist1.show_dist();
    cout<<"\ndist2=";dist2.show_dist();
    cout<<"\ndist3=";dist3.show_dist();
    cout<<endl;
    return 0;
}