//englret.cpp
//function returns value of type distance
#include<iostream>
using namespace std;

class Distance //English Distance calls
{
    private:
        int feet;
        float inches;
    public:
        Distance() :feet(0),inches(0)
        { }
        Distance(int ft,int in):feet(ft),inches(in)
        {}
    void get_distance()
    {
        cout<<"Enter feet:";cin>>feet;
        cout<<"Enter inches:";cin>>inches;
    }
    void show_dist()
    {
        cout<<feet<<"\"-"<<inches<<"\"";
    }
    Distance add_dist (Distance);
};
Distance Distance::add_dist(Distance d2)
{
    Distance temp;
    temp.inches=inches+d2.inches;
    if(temp.inches>=12.0)
    {
        temp.inches -=12;
        temp.feet=1;
    }
    temp.feet+=feet+d2.feet;
    return temp;
}
int main()
{
    Distance dist1,dist3;
    Distance dist2(11,6.25);
    dist1.get_distance();
    dist3=dist1.add_dist(dist2);
    cout<<"\ndist1=";dist1.show_dist();
    cout<<"\ndist2=";dist2.show_dist();
    cout<<"\ndist3=";dist3.show_dist();
    cout<<endl;
    return 0;
}